class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans(candies.size(),true);
        for(int i=0;i<candies.size();i++){
            int sum=candies[i]+extraCandies;
            for(int j=0;j<candies.size();j++){
                if(sum<candies[j]){
                    ans[i]=false;
                    break;
                }
            }
        }
        return ans;
    }
};