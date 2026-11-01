class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(int i=0;i<details.size();i++){
            int n=details[i][11]-'0';
            int m=details[i][12]-'0';
            int age=n*10+m;
            if(age>60){
                ans++;
            }
        }
        return ans;
    }
};