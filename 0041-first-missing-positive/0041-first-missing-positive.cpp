class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
            int n=nums.size();
            for(int i=0;i<n;i++){
                if(nums[i]>0 && nums[i]<n+1){
                    int x=nums[i];
                    if(x==nums[x-1]){
                        continue;
                    }else{
                    swap(nums[i],nums[nums[i]-1]);
                    i--;
                    }
                }
            } 
            int miss=1;
            for(int i=0;i<n;i++){
                if(miss==nums[i]){
                    miss++;
                }
            } 
            return miss;    

            
        //this is the correct solution but it use O(N)space complexity
        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        // int miss=1;
        // for(int i=0;i<n;i++){
        //     if(miss==nums[i]){
        //         miss++;
        //     }
        // }
        // return miss;
    }
};

