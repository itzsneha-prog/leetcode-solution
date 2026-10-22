class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        for(int i=0;i<mat.size();i++){
            sum+=mat[i][i];
        }
        for(int i=0;i<mat.size();i++){
            int j=n-1-i;
            sum+=mat[i][j];
        }

        if((mat.size())%2!=0){
            int m=n/2;
            sum=sum-mat[m][m];
        }
        return sum;
    }
};