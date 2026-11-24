class Solution {
public:
    int findClosest(int x, int y, int z) {
        int yz=abs(y-z);
        int xz=abs(x-z);
        if(xz<yz){
            return 1;
        }
        if(xz>yz){
            return 2;
        }
        return 0;
    }
};