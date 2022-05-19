/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
     TreeNode* lca(TreeNode* root, TreeNode* p, TreeNode* q,TreeNode* &ans)
    {
        if(root==NULL)
            return NULL;
        if(root->val==p->val||root->val==q->val)
            return root;
        TreeNode* l=lca(root->left,p,q,ans);
        TreeNode* r=lca(root->right,p,q,ans);
        if(l && r)
            return root;
        else if(l)
            return l;
        else 
            return r;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans=lca(root,p,q,ans);
        return ans;
        
        
        
        
    }
};