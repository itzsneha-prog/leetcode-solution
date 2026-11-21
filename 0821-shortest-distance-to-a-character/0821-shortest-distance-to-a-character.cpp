class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>ch;
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                ch.push_back(i);
            }
        }

        for(int i=0;i<s.size();i++){
            int idx=s.size();
            for(int j=0;j<ch.size();j++){
                int m=abs(ch[j]-i);
                
                idx=min(idx,m);
                
            }
            ans.push_back(idx);
        }
        return ans;
    }
};