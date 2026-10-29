class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(i!=j && nums[i]==nums[j]){
                    count++;
                }
            }
            if(count==0){
                ans+=nums[i];
            }
        }
        return ans;
    }
};