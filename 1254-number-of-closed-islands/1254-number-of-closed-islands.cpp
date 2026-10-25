class Solution {
public:
    bool check(int i,int j,vector<vector<int>>& vis, vector<vector<int>>& grid){
        if(i<0 || j<0 || j>=grid[0].size() || i>=grid.size()){
            return false;
        }
        if(vis[i][j]){
            return true;
        }
        if(grid[i][j]==1){
            return true;
        }
        bool isClosed=true;
        vis[i][j]=true;
        if(!check(i-1,j,vis,grid)){
            isClosed=false;
        }
        
        if(!check(i,j+1,vis,grid)){
            isClosed=false;

        }
        if(!check(i+1,j,vis,grid)){
            isClosed=false;
        }
        if(!check(i,j-1,vis,grid)){
            isClosed=false;
        }                    
                
            
        return isClosed;
                                 
    }
    int closedIsland(vector<vector<int>>& grid) {
        int count=0;
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),false));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0 && (!vis[i][j])){
                    if(check(i,j,vis,grid)){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};