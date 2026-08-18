class StockSpanner {
    

public:
    int i=0;
    stack<int>nums;
    vector<int>prices;
    int ans=0;
    StockSpanner() {
    
        
    }
    
    int next(int price) {
        prices.push_back(price);
        while(nums.size()>0 && prices[nums.top()]<=price){
                nums.pop();
        }
        if(nums.size()==0){
            nums.push(i);
            ans=i+1;
            i++;      
            return ans;
        }
        ans=i-nums.top();
        nums.push(i);
        i++;        
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */