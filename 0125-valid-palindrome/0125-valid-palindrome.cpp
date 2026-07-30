class Solution {
public:
    bool isPalindrome(string s) {
        string newString;
        string checkPalin;
        for(char &c:s){
            c=tolower(c);
        }
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                newString.push_back(s[i]);
            }
        }
        int n=newString.size();
        for(int i=0;i<n/2;i++){
            int st=i;
            int end=n-i-1;
            if(newString[st]==newString[end]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
        // if(newString.size()==0){
        //     return true;
        // }else{
        //     int n=newString.size();
        //     for(int i= n-1;i>=0;i--){
        //         checkPalin.push_back(newString[i]);
        //     }
        //     if(checkPalin== newString){
        //         return true;
        //     }else{
        //         return false;
        //     }
        // }
    }
};