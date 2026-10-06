class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        if(n==2){
            return "11";
        }
        int m=2;
        string curr="11";
        while(m<n){
            string next="";
            int count=1;

            for(int i=1;i<curr.size();i++){
                if(curr[i]==curr[i-1]){
                    count++;
                }else{
                    next=next+to_string(count)+curr[i-1];
                    count=1;
                }
            }
            next=next+to_string(count)+curr[curr.size()-1];
            curr=next;

            m++;  
        } 
        return curr;
    }
};