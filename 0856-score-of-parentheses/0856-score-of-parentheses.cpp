class Solution {
public:
    int scoreOfParentheses(string s) {
        int netScore=0;
        int score=0;
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(0);
            }else {
                if(st.top()==0){
                    st.pop();
                    st.push(1);
                }else{
                    while(st.top()!=0){
                        score+=st.top();
                        st.pop();
                    }
                    st.pop();
                    st.push(2*score);
                    score=0;
                }
            }
        }
        while(!st.empty()){
            netScore+=st.top();
            st.pop();
        }
        
        return netScore;
    }
};