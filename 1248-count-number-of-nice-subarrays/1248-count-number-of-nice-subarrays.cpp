class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
  
          for(int i=0;i<nums.size();i++){
              if(nums[i]%2==0){
                  nums[i]=0;
              }else {
                  nums[i]=1;
              }
          }
    
        int sum=0;
        int c=0;
        unordered_map<int,int>umap;
       for(int i=0;i<nums.size();i++){
           sum+=nums[i];
           if(sum==k) c++;
           
           if( umap.find(sum-k)!=umap.end()  ){
              c+=umap[sum-k];
           }
           
           umap[sum]++;
           
       }
        
        return c;
    
    }
        
};