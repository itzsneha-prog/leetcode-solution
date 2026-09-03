class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>k;
        for(int i=0;i<s.size();i++){
            if(k.find(s[i])==k.end()){
                k[s[i]]=1;
            }else{
                k[s[i]]++;
            }
        }

        
        for(int i=0;i<s.size();i++){
            if(k[s[i]]==1){
                return i;
                break;
            }
        }
        return -1;
    }
};