class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        //brute force approach
        int count=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count==1){
                ans.push_back(nums[i]);
            }
            count=0;
        }
        return ans;
    }
};