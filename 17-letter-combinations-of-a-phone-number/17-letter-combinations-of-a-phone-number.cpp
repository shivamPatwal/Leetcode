class Solution {
public:
    
    string keypad[9]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void solve(string digits,int i,string out,vector<string>&ans){
        
         if(i==digits.length()){
             ans.push_back(out);
         return;
         } 
        
        int n=digits[i]-'0';
        
        for(int j=0;j<keypad[n-1].size();j++){
            string a=keypad[n-1];
            solve(digits,i+1,out+a[j] ,ans);
        }
        
        
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
       if(digits.size()==0){ return ans; }
        solve(digits,0,"",ans);
        return ans;
        
    }
};