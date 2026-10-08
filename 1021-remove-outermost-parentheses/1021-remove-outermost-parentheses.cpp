class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int>st;
        string ans="";
        for(int i=s.size()-1;i>=0;i--){
            st.push(s[i]);
        }
        int balance=0;
        while(!st.empty()){
            if(st.top()=='('){
                balance++;
                if(balance!=1){
                    ans+=st.top();
                }
            }else{
                balance--;
                if(balance!=0){ 
                    ans+=st.top();
                }
            }
            st.pop();
        }

















        
        // string ans="";
        // int count=1;
        // st.pop();
        // ans.push_back(st.top());
        // st.pop();
        // int idx=ans.size()-1;
        // while(!st.empty()){
        //     if(count==0){
        //         if(st.top()=='('){
        //             count++;
        //         }
        //     }
        //     else if (count==1){
        //         if(st.top()=='('){
        //             ans.push_back(st.top());
        //         }else{
        //             if(st.top()==')' && ans[idx]=='('){
        //                 ans.push_back(st.top());
        //             }else{
        //                 count--;
        //             }
        //         }
        //     st.pop();
        //     idx=ans.size()-1;
        //     }
        // }
        return ans;
    }
};