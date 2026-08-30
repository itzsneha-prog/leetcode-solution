class Solution {
public:
    int countDigits(int num) {
        vector<int>n;
        int m=num;
        int count=0;
        while(num>0){
            int rem=num%10;
            if(m%rem==0 ){
                count++;
            }
            n.push_back(rem);
            num/=10;
        }
        return count;
    }
};