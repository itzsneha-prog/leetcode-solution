class Solution {
public:
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascal;
        vector<int>ans;
        ans.push_back(1);
        pascal.push_back(ans);
        ans.clear();
        for(int i=1;i<numRows;i++){
            ans.push_back(1);
            for(int j=1;j<i;j++){
                ans.push_back(pascal[i-1][j-1]+pascal[i-1][j]);
            }
            ans.push_back(1);
            pascal.push_back(ans);
            ans.clear();
        }
        return pascal;
    }
};