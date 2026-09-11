class Solution {
public:
    int countDigit(int n){
        int count=0;
        while(n>0){
            n=n/10;
            count++;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int m=0;
        for(int i=0;i<nums.size();i++){
            int n=countDigit(nums[i]);
            if(n%2==0){
                m++;
            }
        }
        return m;
    }
};