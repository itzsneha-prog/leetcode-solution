class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            int m=s[i]-96;
            int n=27-m;
            sum+=(i+1)*n;
        }
        return sum;
    }
};