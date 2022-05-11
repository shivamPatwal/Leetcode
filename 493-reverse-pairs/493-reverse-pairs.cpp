class Solution {
public:
    
    int merge(int low,int mid,int high,vector<int>& nums){
    
        int total=0;
        int j=mid+1;
        for(int i=low;i<=mid;i++){
            while(j<=high &&  nums[i]>2LL*nums[j] ){
                j++;
            }
          total+=(j-(mid+1));  
            
        }
        
        int left = low, right = mid + 1;
        vector<int>t;
        while(left<=mid && right<=high ){
            
            if(nums[left] <= nums[right] ){
                
                t.push_back(nums[left++]);
            }else {
              t.push_back(nums[right++]);
                
            }
            
            
            
        }
        
        while(left<=mid){
            t.push_back(nums[left++]);
        }
        
        
        while(right<=high){
            t.push_back(nums[right++]);
        }
        
         for (int i = low; i <= high; i++) {
            nums[i] = t[i-low];
  }
        return total;
        
        
    }
    
    
    int mergesort(int low,int high,vector<int>& nums){
     if(low>=high) return 0;
      int inv=0;
        int mid= (low+high)/2;
        
        inv+=mergesort(low,mid,nums);
        inv+=mergesort(mid+1,high,nums);
        inv+=merge(low,mid,high,nums);
        
        return inv;
    }
    
    int reversePairs(vector<int>& nums) {
    
        
        
        return mergesort(0,nums.size()-1,nums);
        
        
        
        
        
        
        
        
        
    }
    
};