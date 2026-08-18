class Solution {
public:
    string clearDigits(string s) {
        stack<char>character;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                if(character.size()!=0){
                    character.pop();
                }
            }else{
                character.push(s[i]);
            }
        }
        string ans="";
        while(character.size()!=0){
            ans.push_back(character.top());
            character.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};