class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                int rem=nums[i]%10;
                if(rem==digit){
                    count++;
                }
                nums[i]=nums[i]/10;
            }
        }
        return count;
    }
};