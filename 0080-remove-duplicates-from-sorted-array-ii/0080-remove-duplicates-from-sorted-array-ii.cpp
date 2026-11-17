class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int m=nums[0];
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(m==nums[i]){
                count++;
            }else{
                count=1;
                m=nums[i];
            }
            if(count>2){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};