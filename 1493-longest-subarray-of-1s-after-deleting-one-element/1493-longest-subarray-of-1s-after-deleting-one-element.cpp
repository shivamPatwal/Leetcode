class Solution {
public:
    int longestSubarray(vector<int>& nums) {
      
        int result=0;
        
        int i=0;
        int j=0;
        
        bool found=false;
        
        for( i=0;i<nums.size();i++){
            
            if(nums[i]==0 && found==true){
                break;
            }
            
            if(nums[i]==0){
                j=i;
                found=true;
            }
            
            
        }
        
        
       result+= i;
        
        int c=0;
        while(i<nums.size()){
            
            if(nums[i]==0){
                c=j+1;
                j=i;
            }
            
           result=max(result, (i-c)+1) ; 
            
            i++;
            
        }
        
        return result-1;
        
        
    }
};