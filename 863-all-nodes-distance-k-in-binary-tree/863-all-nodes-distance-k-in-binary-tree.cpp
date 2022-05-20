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
   
        void call(TreeNode* root,TreeNode* target,unordered_map<TreeNode*,TreeNode*>&umap){
            
           queue<TreeNode*>q;
            
            q.push(root);
            
            while(!q.empty()){
                TreeNode* current=q.front();
                q.pop();
                
                if(current->left!=NULL){
                    umap[current->left]=current;
                    
                    q.push(current->left);
                    
                }
                    
                 if(current->right!=NULL){
                    umap[current->right]=current;
                    
                    q.push(current->right);
                    
                } 
                
                }
                
                
            }
               
            
            
            
        
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>ans;
        unordered_map<TreeNode*,TreeNode*>umap;
         call(root,target,umap);
        queue<TreeNode*>q;
        q.push(target);
        unordered_map<TreeNode*,bool>visited;
        visited[target]=true;
       
        int c=0;
        while(!q.empty()){
            
            
            int size=q.size();
            if(c++==k){ break;}
            for(int i=0;i<size;i++){
                TreeNode* a=q.front();
                q.pop();
                
                if(a->left  && !visited[a->left] ){
                    q.push(a->left);
                    visited[a->left]=true;
                    
                }
                  if(a->right  && !visited[a->right] ){
                    q.push(a->right);
                    visited[a->right]=true;
                    
                }
                
                 if( umap[a]  && !visited[umap[a]] ){
                    q.push(umap[a]);
                    visited[umap[a]]=true;
                    
                }
                
                
            }
            
            
        }
        
        
        while(!q.empty()){
            
            TreeNode* current=q.front();
            q.pop();
            ans.push_back(current->val);
            
            
        }
        
        
        return ans;
        
        
        
    }
};