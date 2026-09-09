class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         k=k%nums.size();
        reverse(nums.begin(),nums.end());
        for(int i=0;i<k;i++){
            nums.push_back(nums[i]);
        }
        nums.erase(nums.begin(),nums.begin()+k);
        reverse(nums.begin(),nums.end());
    }
};