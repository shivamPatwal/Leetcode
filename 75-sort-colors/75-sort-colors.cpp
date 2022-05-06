class Solution {
public:
    void sortColors(vector<int>& arr) {
         int n=arr.size();
        int cz=0;
        int cone=0;
        for(int i=0;i<n;i++){
              if(arr[i]==0){
                  cz++;
              }
            
            if(arr[i]==1){
                cone++;
            }
        }
        
        
         int i=0;
        int j=n-1;
        
        int one=cz;
        while(i<j){
            
            if(arr[i]==0){
                i++;
                continue;
            }
            
            if(arr[i]==2){
                swap(arr[i],arr[j]);
                j--;
                continue;
            }
            if(arr[i]==1 && cone>0){
                swap(arr[i],arr[cz]);
                cz++;
               cone--;
                continue;
            }
               
           if(i>=one){
               i++;
           } 
            
            
        }
        
        
    }
};