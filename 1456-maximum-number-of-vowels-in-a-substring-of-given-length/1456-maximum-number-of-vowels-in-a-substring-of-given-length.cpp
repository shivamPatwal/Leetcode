class Solution {
public:
    int maxVowels(string s, int k) {
      
        int n=s.length();
        int v=0; 
        int res=0;
      int i=0;
        for(i=0;i<k;i++){
       
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                v++;
            }
       
               
        }
        
        res=v;
        int j=0;
        
        while(i<n){
        
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                v--;
            }
            
            
            
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                v++;
            }
            
            
            res=max(res,v);
        
            
          i++;  
            j++;
          
          }
            
            
        
        return res;
        
        
    }
};