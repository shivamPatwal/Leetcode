/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

     int count = 0;
    void solve(TreeNode *root , unordered_map<long long , long long>&m , int targetsum , long long sum)
    {
           if(root == NULL)
               return  ;
           sum += root->val;
         if(m.find(sum-targetsum) != m.end())
             count += m[sum -targetsum];
          
              m[sum]++;
        solve(root->left , m , targetsum , sum);
        solve(root->right , m , targetsum , sum);
        m[sum]--;
        
           
    }
    int pathSum(TreeNode* root, int targetSum) {
        
        unordered_map<long long, long long>m;
        m.insert({0,1});
        long long sum =0;
        solve(root , m , targetSum , sum);
        return count;
        
        
    } 
};