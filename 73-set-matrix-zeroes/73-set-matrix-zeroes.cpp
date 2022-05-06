class Solution {
public:
    void solve(pair<int,int> a,vector<vector<int>>& matrix){
        int n=matrix.size();
        int m=matrix[0].size();
        int x=a.first;
        int y=a.second;
        int i=x;
        int j=y;
        while(i>=0 ){
            
            matrix[i][y]=0;
            i--;
            
        }
            i=x;
        while(i<n){
             matrix[i][y]=0;
            i++;
            
        }
            
            while(j>=0){
            
                matrix[x][j]=0;
            j--;
                
                
            }
        j=y;
        while(j<m){
            
            
                matrix[x][j]=0;
              j++;
            
        }
        
        
        
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
     
        int n=matrix.size();
        int m=matrix[0].size();
        vector< pair<int,int> >v;
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                
                if(matrix[i][j] ==0){
                
                    v.push_back({i,j});
                }  
            
            }
            
        }
        
        
        for(auto i:v){
           
             
            solve(i,matrix);
            
            
            
        }
        
        
    }
};