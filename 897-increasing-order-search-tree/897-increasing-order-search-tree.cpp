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
    void solve(TreeNode* root,TreeNode* &temp){
        
         if(root==NULL) return;
        
        solve(root->left,temp);
        temp->right=new TreeNode(root->val);
        temp->left=NULL;
        temp=temp->right;
        solve(root->right,temp);
        
        
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* temp1=NULL;
        TreeNode* temp=new TreeNode(0);
        temp1=temp;
        solve(root,temp);
        return temp1->right;
    }
};