class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans;
        sort(nums.begin(),nums.end());
        int sum=0;
        int ansDiff=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int st=i+1;
            int end=nums.size()-1;
            while(st<end){
                sum=nums[i]+nums[st]+nums[end];
                int diff=abs(target-sum);
                if(diff<ansDiff){
                    ans=sum;
                    ansDiff=diff;
                }
                if(sum>target){
                end--;
                    }
                else if(sum<target){
                    st++;
                }else{
                    return sum;
                }
            }
            
        }
        return ans;
    }
};