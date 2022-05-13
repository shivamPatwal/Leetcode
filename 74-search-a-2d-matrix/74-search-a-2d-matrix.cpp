class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        
        int n=arr.size();
        int m=arr[0].size();
        int i=0;
        for(i=0;i<n;i++){
            
            if(arr[i][0]>target){
                
                break;
            }
            
        }
        if(i==0) return false;
        else {
            for(int j=0;j<m;j++){
                
                if(arr[i-1][j]==target){
                    return true;
                }
            }
            
            
        }
        return false;
        
    }
};