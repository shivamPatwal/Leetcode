class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     
        
        unordered_map<int,int>umap;
        int sum=0;
        int c=0;
        for(int i=0;i<nums.size();i++){
            
            sum+=nums[i];
            
            if(sum==k){ c++; }
            
            
            if(umap.find(sum-k)!=umap.end()){
                
                c+=umap[sum-k];
                
            }
            umap[sum]++;
            
            
            
        }
        
        
        return c;
    }
};