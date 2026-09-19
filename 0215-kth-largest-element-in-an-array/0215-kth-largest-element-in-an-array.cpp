class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=0;
        int ans;
        for(int i=nums.size()-1;i>=0;i--){
            ans=nums[i];
            count++;
            if(count==k){
                return ans;
            }
        }
        return -1;
    }
};