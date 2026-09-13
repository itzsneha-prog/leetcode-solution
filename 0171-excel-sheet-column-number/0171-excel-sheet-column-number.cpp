class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size();
        int sum=0;
        // if(n==1){
        //     return columnTitle[0]-64;
        // }else if(n==2){
        //     sum=(columnTitle[1]-64)+26*(columnTitle[0]-64);
        //     return sum;
        // }
        for(int i=0;i<n;i++){
            int val=columnTitle[i]-64;
            if(sum==0){
                sum+=val;
            }else{
                sum=26*sum+val;
            }
        }
        return sum;
    }
};