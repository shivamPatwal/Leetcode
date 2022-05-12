class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string ans="";
    int j=0;
        
       if(strs[0]=="") return ans; 
        if(strs.size()==0) return ans;
      for(int i=0;i<strs[0].size();i++){
          
          
          
            char a=strs[0][i];
          
          for(string x:strs){
              
              if(a!=x[i]){ 
              return ans;
              }
          
          }
          ans+=a; 
      
          
      }
    
    
    
    
    return ans;
    
    
    
    }
        
        
        
        
        
    
};