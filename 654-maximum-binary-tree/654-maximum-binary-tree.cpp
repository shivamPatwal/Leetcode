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
    
    TreeNode* solve(TreeNode* root,vector<int>& nums,int low,int high){
    int ans=INT_MIN;
        
     if(low>high) return NULL ;
        
       int j;
        
        for(int i=low;i<=high;i++){
          
            if(ans<nums[i]){
                ans=nums[i];
                j=i;
            }
            
        }
        root=new TreeNode(ans);
        root->left=solve(root->left,nums,low,j-1);
        root->right=solve(root->right,nums,j+1,high);
        
        return root;
        
        
        
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
     TreeNode* root=NULL;
       return solve(root,nums,0,nums.size()-1);
        
        
    }
};