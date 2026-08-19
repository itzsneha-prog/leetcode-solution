class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans;
        stack<pair<int,int>>nextTemp;
        for(int i=temperatures.size()-1;i>=0;i--){
            int count=0;
            if(nextTemp.size()==0){
                ans.push_back(0);
                nextTemp.push({temperatures[i],i});
                continue;
            }else{
                while(nextTemp.size()!=0 && nextTemp.top().first<=temperatures[i]){
                    nextTemp.pop();

                }
                if(nextTemp.size()==0){
                ans.push_back(0);
                }else{
                    ans.push_back(nextTemp.top().second-i);
                }
                nextTemp.push({temperatures[i],i});
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};