class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>nums;
        for(int i=0;i<s.size();i++){
            if(nums.size()!=0){
                if(nums.top()==s[i]){
                    nums.pop();
                    continue;
            }
            }
            nums.push(s[i]);
        }
        string ans="";
        while(nums.size()!=0){
            ans.push_back(nums.top());
            nums.pop();
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};