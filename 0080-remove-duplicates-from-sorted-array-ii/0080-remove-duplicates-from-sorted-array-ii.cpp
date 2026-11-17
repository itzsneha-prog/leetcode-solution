class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx=0;
        int count=0;
        int m=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==m){
                count++;
            }else{
                count=1;
                m=nums[i];
            }
            if(count<=2){
                nums[idx]=nums[i];
                idx++;
            }
        }

        return idx;

        // int m=nums[0];
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     if(m==nums[i]){
        //         count++;
        //     }else{
        //         count=1;
        //         m=nums[i];
        //     }
        //     if(count>2){
        //         nums.erase(nums.begin()+i);
        //         i--;
        //     }
        // }
        // return nums.size();
    }
};