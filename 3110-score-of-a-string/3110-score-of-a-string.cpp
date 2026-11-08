class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        for(int i=1;i<s.size();i++){
            int m=abs(s[i]-s[i-1]);
            ans+=m;
        }
        return ans;
    }
};