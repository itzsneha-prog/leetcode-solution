class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>answer;
        int first=-1;
        int last=-1;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }else if(nums[mid]>target){
                high=mid-1;
            }else {
                low=mid+1;
            }
        }
        
        low=first;
        high=nums.size()-1;
        if(low!=-1){
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[mid]==target){
                    last=mid;
                    low=mid+1;
                }else if(nums[mid]>target){
                    high=mid-1;
                }else {
                    low=mid+1;
                }
            }
        }
        answer.push_back(first);
        answer.push_back(last);
        return answer;
    }
};