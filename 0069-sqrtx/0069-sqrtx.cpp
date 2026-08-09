class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        if(x==1){
            return 1;
        }
        int low=0;
        int high=x/2;
        int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(1LL*mid*mid>x){
                high=mid-1;
            }else if(1LL*mid*mid<x){
                low=mid+1;
                ans=mid;
            }else {
                ans=mid;
                return ans;
            }
        }
        return ans;
    }
};