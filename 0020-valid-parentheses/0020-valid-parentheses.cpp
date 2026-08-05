class Solution {
public:
    bool isValid(string s) {
        stack<char>bracket;
        int n=s.size();
        for(int i=0;i<n;i++){
            char curr=s[i];
            if(bracket.empty() && (curr=='('|| curr=='{' || curr=='[')){
            bracket.push(curr);
                continue;
            }else if(bracket.empty() &&  (curr==')'|| curr=='}' || curr==']')){
                return false;
            }
            char top=bracket.top();
            if(curr=='('|| curr=='{' || curr=='['){
                bracket.push(curr);
            }else if(top=='(' && curr==')'){
                bracket.pop();
            }else if(top=='[' && curr==']'){
                bracket.pop();
            }else if(top=='{' && curr=='}'){
                bracket.pop();
            }else{
                return false;
            }
            
        }
        if(bracket.empty()){
            return true;
        }else{
            return false;
        }
    }
};