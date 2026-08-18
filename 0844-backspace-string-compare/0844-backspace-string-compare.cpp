class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>t1;
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='#' ){
                if(s1.size()!=0){
                    s1.pop();
                }
                continue;
            }
            
            s1.push(s[i]);
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#' ){
                if(t1.size()!=0){
                    t1.pop();
                }
                continue;
            }
        
            t1.push(t[i]);
        }
        while(s1.size()!=0 && t1.size()!=0){
            if(s1.top()==t1.top()){
                s1.pop();
                t1.pop();
            }
            else{
                return false;
            }
        }
        if(s1.size()==0 && t1.size()==0){
            return true;
        }
        return false;
    }
};