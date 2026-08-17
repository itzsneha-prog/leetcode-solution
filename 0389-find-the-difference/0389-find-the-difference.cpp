class Solution {
public:
    char findTheDifference(string s, string t) {
        char ch;
        for(int i=0;i<t.size();i++){
            int j=0;
            while( j<s.size() && s[j]!=t[i] ){
                j++;
            }
            if(t[i]==s[j]){
                s.erase(s.begin()+j);
            }else{
                ch=t[i];
                return ch;
            }
        }
        
        return ch;
    }
};