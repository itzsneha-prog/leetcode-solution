class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n%2==0?n:2*n;
        // if(n%2!=0){
        //     return 2*n;
        // }
        // while(n%2==0){
        //     n=n/2;
        // }
        // if(n==2){
        //     return n;
        // }
        // return n*2;
    }
};