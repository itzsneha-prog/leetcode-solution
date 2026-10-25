class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>freq;
        int count=1;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for( const auto [key,value]:freq){
            if(value==2){
                ans.push_back(key);
            }
        }
        return ans;
    }
};