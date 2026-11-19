class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max1=INT_MIN;
        for(int i=0;i<nums.size();i++){
            max1=max(max1,nums[i]);
        } 
        nums.erase(remove(nums.begin(), nums.end(), max1), nums.end());
        if(nums.size()==0){
            return max1;
        }
        int max2=INT_MIN;
        for(int i=0;i<nums.size();i++){
            max2=max(max2,nums[i]);
        }
        nums.erase(remove(nums.begin(), nums.end(), max2), nums.end());
        if(nums.size()==0){
            return max1;
        }
        int max3=INT_MIN;
        for(int i=0;i<nums.size();i++){
            max3=max(max3,nums[i]);
        }
        
        return max3;
    }
};