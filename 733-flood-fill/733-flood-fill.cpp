class Solution {
public:
    
 void   floodfill(int i,int j,int x,int y,vector<vector<int>>&image,int oldColor,vector<vector<int>>&vis,int newColor){
        
        if(i<0 or j<0 or i>=x or j>=y) return;
        
        if( vis[i][j] or image[i][j]!=oldColor) return ;
        
        vis[i][j]=1;
        image[i][j]=newColor;
        floodfill(i+1,j,x,y,image,oldColor,vis,newColor);
        floodfill(i-1,j,x,y,image,oldColor,vis,newColor);
        floodfill(i,j+1,x,y,image,oldColor,vis,newColor);
        floodfill(i,j-1,x,y,image,oldColor,vis,newColor);
        
        
        
        
        
    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int x=image.size();
        int y=image[0].size();
        vector<vector<int>>vis(x,vector<int>(y,0));
        int oldColor=image[sr][sc];
        floodfill(sr,sc,x,y,image,oldColor,vis,newColor);
        
        
        return image;
        
        
        
        
    }
};