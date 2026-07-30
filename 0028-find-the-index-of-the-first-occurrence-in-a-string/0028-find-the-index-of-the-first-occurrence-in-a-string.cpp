class Solution {
public:
    int strStr(string haystack, string needle) {
    //     int n=haystack.find(needle);
    //     return n;
    int n=haystack.size();
    int m=needle.size();
    for(int i=0;i<=n-m;i++){
        int st=i;
        for(int j=0;j<m;j++){
            if(needle[j]==haystack[st]){
                st++;
            }
            else{
                break;
            }
        }
        if(m==st-i){
            return i;
        }
    }
    return -1;
    }
};