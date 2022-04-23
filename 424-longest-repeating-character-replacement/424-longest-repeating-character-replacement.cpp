class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int i=0;
        int j=0;
        
        int result=0;
        
        int n=s.length();
        int maxfreq=0;
        unordered_map<char,int>umap;
        while(j<n){
            
            umap[s[j]]++;
            
            maxfreq=max(maxfreq,umap[s[j]]);
            
            int replacement= (j-i+1 - maxfreq);
         
             if(replacement<=k){
                 result=max(result,(j-i+1));
                 j++;
                 
             }else {
                 umap[s[i]]--;
                 i++;
                 j++;
                 
                 
             }
            
            
            
            
            
        }
        
        
        return result;
    }
};