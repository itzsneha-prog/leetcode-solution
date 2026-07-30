class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int m=s.size()-1;
        while(m>=0 && s[m]==' ' ){
            s.erase(m,1);
            m--;
        }
        m=s.size()-1;
        int count=0;
        while(m>=0 && s[m]!=' '){
            count++;
            m--;
        }
        return count;
    }
};