class Solution {
public:
    vector<string>ans;
    void solve(int n,int open, int close,int i,string an){
        
        
        if(i==2*n){
ans.push_back(an);
          return;
         }
        
        
        if(open < n){
            solve(n,open+1,close,i+1,an+'(');
        }
        
         
        
             if(close<open){
            solve(n,open,close+1,i+1,an+')');
            
        }
            
        
        
    }
    vector<string> generateParenthesis(int n) {
      
        solve(n,0,0,0,"");
        
        
        return ans;
        
    }
};