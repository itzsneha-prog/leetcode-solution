class Solution {
public:
    bool canAliceWin(int n) {
        // int m=10;
        // while(n>=m){
        //     n-=m;
        //     --m;
        // }
        // if(m==0){
        //     return true;
        // }
        // if(n<m){
        //     return true;
        // }
        // return false;


        int m = 10;
        bool aliceTurn = true;

        while (n >= m) {
            n -= m;
            --m;
            aliceTurn = !aliceTurn;
        }

        return !aliceTurn;
    

    }
};