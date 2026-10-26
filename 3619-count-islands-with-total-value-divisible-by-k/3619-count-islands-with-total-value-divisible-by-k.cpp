class Solution {
public:
    void check(int i,int j,vector<vector<int>>& vis,vector<vector<int>>& grid,long long &sum){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || (vis[i][j])){
            return;
        }
        if(grid[i][j]==0){
            return;
        }
        vis[i][j]=true;
        sum+=(1LL*grid[i][j]);
        check(i-1,j,vis,grid,sum);
        check(i,j+1,vis,grid,sum);
        check(i+1,j,vis,grid,sum);
        check(i,j-1,vis,grid,sum);
        
        return;
    }

    int countIslands(vector<vector<int>>& grid, int k) {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),false));
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                long long sum=0;
                if(grid[i][j]!=0 && !vis[i][j]){
                    check(i,j,vis,grid,sum);
                        if(sum%k==0){
                            count++;
                        }
                    }
                }
            }
        
        return count;
    }
};