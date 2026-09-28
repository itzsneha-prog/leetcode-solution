class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int ans_count=INT_MIN;
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]==')' || s[i]=='('){
                st.push(s[i]);
            }
        }
        if(st.empty()){
            return 0;
        }
        while(!st.empty()){
            if(st.top()=='('){
                count--;
                st.pop();
            }else if(st.top()==')'){
                count++;
                ans_count=max(ans_count,count);
                st.pop();
            }
        }
        return ans_count;
    }
};