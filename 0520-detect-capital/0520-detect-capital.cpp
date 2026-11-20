class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        bool first=false;
        bool mid=false;
        for(int i=0;i<word.size();i++){
            int n=word[i];
            if(n>=65 && n<=90){
                if(i==0){
                    first=true;
                }else{
                    mid=true;
                }
                count++;
            }
        }
        if(count==word.size()){
            return true;
        }
        if(count==1 && first){
            return true;
        }
        if(count==0){
            return true;
        }
        return false;
    }
};