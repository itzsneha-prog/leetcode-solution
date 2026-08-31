class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int countR=0;
        int countL=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                countR++;
            }
            if(s[i]=='L'){
                countL++;
            }
            if(countR==countL){
                count++;
                countR=0;
                countL=0;
            }
        }
        return count;
    }
};