class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
       int count=0;
        int a=0;
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            
            a+=nums[i];
            
            int rem=a%k;
          if(rem<0){
              rem+=k;
          }
            if(rem==0){
                count++;
            }
            
            if(umap.find(rem)!=umap.end()){
            count+=umap[rem];      
                
            }
            umap[rem]++;
            
        }
        
        return count;
    }
};