class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(int i=0;i<operations.size();i++){
            string op="";
            for(int j=0;j<3;j++){
                op=op+operations[i][j];
            }
            if(op=="--X" || op=="X--"){
                ans--;
            }else{
                ans++;
            }
        }
        return ans;
    }
};