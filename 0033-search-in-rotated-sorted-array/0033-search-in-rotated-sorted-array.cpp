class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[high]){
                low=mid+1;
            }else {
                high=mid;
            }
        }
        int idx=low;
        int low1=0;
        int high1=idx-1;
        while(low1<=high1){
            int mid=low1+(high1-low1)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                high1=mid-1;
            }else{
                low1=mid+1;
            }
        }
        int low2=idx;
        int n=nums.size()-1;
        while(low2<=n){
            int mid=low2+(n-low2)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                n=mid-1;
            }else{
                low2=mid+1;
            }
        }
        return -1;
    }
};