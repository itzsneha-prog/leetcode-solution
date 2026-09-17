class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>rev;
        rev=nums;
        reverse(rev.begin(),rev.end());
        for(int i=0;i<rev.size();i++){
            nums.push_back(rev[i]);
        }
        return nums;
    }
};