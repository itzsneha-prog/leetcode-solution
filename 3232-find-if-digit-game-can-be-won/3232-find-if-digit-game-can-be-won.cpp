class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sumD=0;
        int sumS=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>9){
                sumD+=nums[i];
            }else{
                sumS+=nums[i];
            }
        }
        if(sumD>sumS || sumS>sumD){
            return true;
        }
        return false;
    }
};