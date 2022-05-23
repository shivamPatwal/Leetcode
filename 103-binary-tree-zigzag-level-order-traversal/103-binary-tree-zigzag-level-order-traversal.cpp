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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       
        
        vector<vector<int>>ans;
        if(root==NULL) return ans; 
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            
            
            int  size=q.size();
            vector<int>a;
            for(int i=0;i<size;i++){
                
         TreeNode* c=q.front();
            q.pop();
            
            
                a.push_back(c->val);
                if(c->left){
                 q.push(c->left);   
                }
                if(c->right){
                    q.push(c->right);
                }
                
            }
            
            ans.push_back(a);
            
            
        }
        
        for(int i=0;i<ans.size();i++){
            if(i%2!=0){
                reverse(ans[i].begin(),ans[i].end());
            }
            
        }
        
        return ans;
        
    }
};