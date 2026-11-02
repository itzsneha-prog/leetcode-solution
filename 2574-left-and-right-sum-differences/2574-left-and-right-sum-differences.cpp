class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>right(nums.size(),0);
        vector<int>left(nums.size(),0);
        for(int i=1;i<nums.size();i++){
            int sum=0;
            for(int j=0;j<i;j++){
                sum+=nums[j];
            }
            left[i]=sum;
        }

        for(int i=0;i<nums.size()-1;i++){
            int sum=0;
            for(int j=i+1;j<nums.size();j++){
                sum+=nums[j];
            }
            right[i]=sum;
        }
        for(int i=0;i<nums.size();i++){
            left[i]=abs(left[i]-right[i]);
        }
        return left;
    }
};