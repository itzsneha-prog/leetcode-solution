class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>freq;
        int count=0;
        int sum=0;
        long long origSum=nums.size()*(nums.size()+1)/2;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int reNum=0;
        for(auto &p:freq){
            if(p.second==2){
               reNum=p.first;
               break;
            }
        }
        ans.push_back(reNum);

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        sum=sum-reNum;
        ans.push_back(origSum-sum);
        return ans;
    }
};