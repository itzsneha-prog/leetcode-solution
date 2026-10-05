class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int idx=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                idx=i;
                break;
            }
        }
        int low=0;
        int high=idx;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return true;
            }else if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        low=idx;
        high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return true;
            }else if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }

        return false;























        // int low=0;
        // int high=nums.size()-1;
        // while(low<=high){
        //     int mid=low+(high-low)/2;
        //     if(nums[mid]<=nums[low]){
        //         low=mid-1;
        //     }else if(nums[mid]>=nums[low]){
        //         low=mid+1;
        //     }else{
        //         high=mid;
        //     }
        // }
            
        // bool found=false;
        // int idx=low;
        // int st=0;
        // int end=low-1;
        // while(st<end){
        //     int mid=st+(end-st)/2;
        //     if(nums[mid]>target){
        //         end=mid-1;
        //     }else if(nums[mid]<target){
        //         st=mid+1;
        //     }else{
        //         found=true;
        //         break;
        //     }
        // }
        // if(!found){
        //     st=low;
        //     end=nums.size()-1;
        //     while(st<end){
        //     int mid=st+(end-st)/2;
        //         if(nums[mid]>target){
        //             end=mid-1;
        //         }else if(nums[mid]<target){
        //             st=mid+1;
        //         }else{
        //             found=true;
        //             break;
        //         }
        //     } 
        // }
        // return found;
    }
};