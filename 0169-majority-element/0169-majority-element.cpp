class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int f=0;
       int ans=0;
       int n=nums.size();
       for(int i=0;i<n;i++) {
        if(f==0){
            ans=nums[i];
        }if(ans==nums[i]){
            f++;
        }else{
            f--;
        }
        
       }
       if(f>=1){
            return ans;
        }
       return -1;
    }
};