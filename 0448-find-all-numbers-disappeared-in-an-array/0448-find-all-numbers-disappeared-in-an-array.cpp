class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        

        for(int i=0;i<nums.size();i++){
            ans[nums[i]-1]=1;
        }
        nums.clear();
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=1){
                nums.push_back(i+1);
            }
        }
        return nums;
    }
};