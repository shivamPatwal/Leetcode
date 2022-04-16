class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
    int n=nums.size(),left=0,ryt=n-1;
          vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            
            if(abs(nums[left])>=abs(nums[ryt])){
                ans[i]=nums[left]*nums[left];
                left++;
            
            }else{
              
                ans[i]=nums[ryt]*nums[ryt];
                ryt--;
            
            }
        
        }
        
        return ans;
        
    }
};