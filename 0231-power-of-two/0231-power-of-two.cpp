class Solution {
public:

    
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        long long pow=1;
        while(pow<n){
            pow=pow*2;
        }
        if(pow==n){
            return true;
        }
        return false;
    }
};