// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    int low=1;
    int high=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(isBadVersion(mid)){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return low;
    
    
    //     int i=1;
    //     while(i<=n){
    //         if(isBadVersion(i)){
    //             return i;
    //         }
    //         i++;
    //     }
    //     return -1;
    }
};