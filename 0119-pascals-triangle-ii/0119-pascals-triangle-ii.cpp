class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        ans.push_back(1);
       
        for(int i=1;i<=rowIndex;i++){
            vector<int>curr;
            curr.push_back(1);
            for(int j=1;j<i;j++){
                curr.push_back(ans[j-1]+ans[j]);
            }
            curr.push_back(1);
            ans.clear();
            ans=curr;
        }
        return ans;
    }
};