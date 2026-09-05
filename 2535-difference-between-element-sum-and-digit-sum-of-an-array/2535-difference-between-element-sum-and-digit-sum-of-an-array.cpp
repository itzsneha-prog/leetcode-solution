class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(nums[i]>9){
                while(nums[i]>0){
                    int rem=nums[i]%10;
                    sum1+=rem;
                    nums[i]=nums[i]/10;
                }
            }
            sum1+=nums[i];
        }

        return abs( sum1-sum);
    }
};