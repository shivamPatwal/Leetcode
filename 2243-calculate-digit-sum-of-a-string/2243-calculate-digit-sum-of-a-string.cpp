class Solution {
public:
    string digitSum(string s, int k) {
        if(s.length()<=k){
            return s;
        }
    
        int j=0;
        int i=0;
        int a=0;
        string str="";
        while(true){
            
            a+= s[i]-'0';   //i=2 j=2   //111
            
          
              if( j == s.length()-1){
                str+=to_string(a);
                if(str.length()<=k){
                    return str;
                }else {
                  return  digitSum(str,k);
                    
                }
                
            }
          
            
            if( (j+1) % k==0 ){
                
                str+=to_string(a);
                a=0;
                
            }
            
            
            i++;
            j++;
            
        }
        
        
        
        
    }
};