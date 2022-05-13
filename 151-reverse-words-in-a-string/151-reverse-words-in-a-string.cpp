class Solution {
public:
    string reverseWords(string s) {
    
        int i=0;
        int n=s.length();
        string ans;
        while(i<n){
            
            if(s[i]==' '){
                i++;
            }
            string temp="";
            while(i<n && s[i]!=' '){
                temp+=s[i];
                i++;
            }
            
            
            
            if(temp.empty()==false){
                ans=temp+" "+ans;
            }
            
            
        }
        
       ans.pop_back();
    return ans;
    }
};