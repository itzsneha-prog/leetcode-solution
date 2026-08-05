class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        while(columnNumber>0){
            int n=(columnNumber-1)%26;
            ans.push_back('A'+n);
            columnNumber=(columnNumber-1)/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};