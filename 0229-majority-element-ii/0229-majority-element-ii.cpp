class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>freq;
        int m=nums.size()/3;
        for(int i=0;i<nums.size();i++){
            if(freq.find(nums[i])==freq.end()){
                freq[nums[i]]=1;
            }else{
                freq[nums[i]]++;
            }
            
        }

        for(auto it:freq){
            if(it.second>m){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};