class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>duplicate;
        int j=0;
        for(int i=0;i<nums.size();i++){

            if(i-j>k){
                duplicate.erase(nums[j]);
                j++;
            }
            if(duplicate.find(nums[i]) != duplicate.end()){
                return true;
            }else{
                duplicate.insert(nums[i]);
            }
        }
        return false;


        // for(int i=0;i<nums.size();i++){
        //     int j=i+1;
        //     while(j<nums.size() && j<=i+k){
        //         if(nums[i]==nums[j]){
        //             return true;
        //         }
        //         j++;
        //     }
        // }
        // return false;
    }
};