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
    vector<TreeNode*>solve(int start,int end){
    vector<TreeNode*>v;
       
        if(start>end){
            v.push_back(NULL);
            return v;
            
        }
        
        for(int i=start;i<=end;i++){
            
            vector<TreeNode*>left=solve(start,i-1);
            vector<TreeNode*>right=solve(i+1,end);
            
            for(auto lt:left){
                for(auto rt:right){
                    TreeNode* temp=new TreeNode(i);
                   temp->left=lt;
                    temp->right=rt;
                    
                    v.push_back(temp);
                }
            }
            
            
        }
        
       return v; 
        
        
        
    }
    vector<TreeNode*> generateTrees(int n) {
        
   return solve(1,n);
        
       // return v;
        
        
        
        
    }
};