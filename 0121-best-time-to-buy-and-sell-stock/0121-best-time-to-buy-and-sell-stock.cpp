class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int netprofit=0;
        //brute force approach
        // for(int i=0;i<prices.size()){
        //     for(int j=i+1;j<prices.size();j++){
        //         profit=max(profit,prices[j]-prices[i]);
        //     }
        // }
         
        //optimal
        int lowest=prices[0];
        for(int i=1;i<prices.size();i++){
            if(lowest>prices[i]){
                lowest=prices[i];
            }
            profit=prices[i]-lowest;
            netprofit=max(profit,netprofit);
        }
        
        return netprofit;
    }
};