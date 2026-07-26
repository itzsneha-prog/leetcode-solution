class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>findMissingAndRepeatedValues;
        int n=grid.size();
        int m=n*n;
        vector<int>arr(m,0);
        int r,miss;

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                arr[grid[i][j]-1]++;
                }
        }
        for(int i=0;i<m;i++){
            if(arr[i]==2){
                r=i+1;
            }
            else if(arr[i]==0){
                miss=i+1;
            }
        }
        findMissingAndRepeatedValues.push_back(r);
        findMissingAndRepeatedValues.push_back(miss);
        return findMissingAndRepeatedValues;
    }
};