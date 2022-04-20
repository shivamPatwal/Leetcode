class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        
        set<char>uset;
        int i=0,j=0,maxi=0;
        
        while(i<n && j<n){
            if(uset.find(s[j])!=uset.end()){
                uset.erase(s[i]);
                i++;
            }else{
                
                uset.insert(s[j]);
                j++;
                
                maxi=max(maxi,j-i);
            }
            
            
        }
        
        return maxi;
        
        
        
    }
};