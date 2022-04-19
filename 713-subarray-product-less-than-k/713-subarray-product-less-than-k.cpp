class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

       if(k<=1) return 0;
    int ans=0, j=-1 ,i, product=1;
    for(i=0;i<nums.size();++i){
        product *= nums[i];
        while(product>=k){
            ++j;
            if(nums[j]) product /= nums[j];
        }
        if(product<k) ans += (i-j);    
    }
    return ans;
    }
};