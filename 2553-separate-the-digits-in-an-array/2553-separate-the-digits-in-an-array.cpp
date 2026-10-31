class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int m=nums[i];
            vector<int>temp;
            while(m>0){
                int rem=m%10;
                temp.push_back(rem);
                m=m/10;
            }
            reverse(temp.begin(),temp.end());
            for(int j=0;j<temp.size();j++){
                ans.push_back(temp[j]);
            }
        }
        return ans;
    }
};