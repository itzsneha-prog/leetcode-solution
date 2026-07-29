class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
                
        string ans;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
             mini=min(mini,(int)strs[i].length());
        }
        

        for(int i=0;i<mini;i++){
            char curr=strs[0][i];
            for(int j=1;j<n;j++){
                if(strs[j][i] != curr){
                    return ans;
                }
            }
            ans.push_back(curr);

        }
        return ans;
    }
};