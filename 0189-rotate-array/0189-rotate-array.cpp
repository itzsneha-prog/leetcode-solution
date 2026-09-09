class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //T.C=O(n)&& S.P=O(n);
        //  k=k%nums.size();
        // reverse(nums.begin(),nums.end());
        // for(int i=0;i<k;i++){
        //     nums.push_back(nums[i]);
        // }
        // nums.erase(nums.begin(),nums.begin()+k);
        // reverse(nums.begin(),nums.end());


        //T.C=O(n) && S.C=O(n)
        k=k%nums.size();
        int m=nums.size()-k;
        reverse(nums.begin(),nums.begin()+m);
        reverse(nums.begin()+m,nums.end());
        reverse(nums.begin(),nums.end());
    }
};