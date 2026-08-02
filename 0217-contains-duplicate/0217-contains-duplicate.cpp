class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>frequency;
        int n=nums.size();
        for(int i=0;i<n;i++){
            frequency[nums[i]]++;
        }
        int m=frequency.size();
        for(auto &p: frequency){
            if(p.second>1){
                return true;
            }
        }
        
        return false;
    }
};