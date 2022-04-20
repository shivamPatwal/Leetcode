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
class BSTIterator {
public:
    
  stack<TreeNode*> st;
    BSTIterator(TreeNode* root) {
        
       Left(root);
        
    }
    
    int next() {
      
        TreeNode* p=st.top();
        st.pop();
        if(p->right){
            Left(p->right);
        }
        
        return p->val;
    }
    
    bool hasNext() {
   
        return st.empty()?false:true;
        
    }
    
    void Left(TreeNode* root){
        
        
        TreeNode* p = root;
        while (p)
        {
            st.push(p);
            p = p->left;
        }
        
    }
    
    
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */