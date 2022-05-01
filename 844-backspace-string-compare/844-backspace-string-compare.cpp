class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char>st;
        
        stack<char>st1;
        for(int i=0;i<s.length();i++){
           if(s[i]=='#' && st.size()==0){
          continue;
           
               }else if(s[i]=='#'){
                st.pop();
            }else {
                st.push(s[i]);
            }
        
        }
        
        for(int i=0;i<t.length();i++){
            if(t[i]=='#' && st1.size()==0){
                 continue;
            }else  if(t[i]=='#' ){
                st1.pop();
            }else {
                st1.push(t[i]);
            }
        
        } 
        
    if(st.size()!=st1.size()) {return false;}
        else {
            
            while(!st.empty()){
                
                if(st.top()!=st1.top()){
                    return false;
                }
                
                st.pop();
                st1.pop();
            }
        }
            
        return true;
    }
};