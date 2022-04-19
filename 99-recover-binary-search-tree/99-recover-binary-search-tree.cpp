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
     TreeNode *prev = nullptr, *first, *second;
    
    void travel(TreeNode* root) {
        if (!root) return;
        travel(root->left);
        
        if(prev ) {
            if (root->val < prev->val) {
                if (!first)
                    first = prev;
                second = root;
            }
        }

        prev = root;
        travel(root->right);
    }

public:
    void recoverTree(TreeNode* root) {
        travel(root);
        swap(first->val, second->val);
    }
};