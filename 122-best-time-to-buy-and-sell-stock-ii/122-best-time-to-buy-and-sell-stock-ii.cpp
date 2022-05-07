class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
         int profit =0;  
        int buy = prices[0];
        
        for(int i=0;i<prices.size();i++){
           
            if(i==prices.size()-1){
           profit+=prices[i]-buy;
                break;
                
            }
            
            if(prices[i]>prices[i+1]){
                
                profit+=prices[i]-buy;
                buy=prices[i+1];
            }
            
            
        }
        
        return profit;
        
        
    }
};