class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        int tar=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int st=i+1;
            int end=n-1;
            while(st<end){
                
                if(nums[i]+nums[st]+nums[end]==0){
                    ans.push_back({nums[i],nums[st],nums[end]});
                    st++;
                    end--;
                    while(st<end && nums[st]==nums[st-1]){
                    st++;
                    }
                    while(st<end && nums[end]==nums[end+1]){
                        end--;
                    }
                    
                }else if(-nums[i]>nums[st]+nums[end]  ){
                    st++;
                }else{
                    end--;
                }
                
            }
        }
        return ans;
    }
};