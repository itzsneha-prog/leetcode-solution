class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>left;
        int prod=1;
        for(int i=0;i<nums.size();i++){
            left.push_back(prod);
            prod*=nums[i];
        }
        prod=1;
        for(int i=nums.size()-1;i>=0;i--){
            left[i]=left[i]*prod;
            prod*=nums[i];
        }
        
        return left;

        //time complexity=O(n)ans space is also O(n)
        // vector<int>left;
        // vector<int>right;
        // vector<int>ans;
        // int prod=1;
        // for(int i=0;i<nums.size();i++){
        //     left.push_back(prod);
        //     prod*=nums[i];
        // }
        // prod=1;
        // int j=0;
        // for(int i=nums.size()-1;i>=0;i--){
        //     right.push_back(prod);
        //     prod*=nums[i];
        // }
        // reverse(right.begin(),right.end());
        // for(int i=0;i<nums.size();i++){
        //     ans.push_back(left[i]*right[i]);
        // }
        // return ans;
    }
};