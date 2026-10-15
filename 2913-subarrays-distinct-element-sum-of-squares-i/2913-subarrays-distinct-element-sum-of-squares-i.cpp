class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int dis=0;
            unordered_map<int,int>v;
            for(int j=i;j<nums.size();j++){
                if(v.find(nums[j])==v.end()){
                    v[nums[j]]=1;
                    dis++;
                }
                ans+=(dis*dis);

            }

        }
        return ans;






        //brute force approach
        // int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i;j<nums.size();j++){
        //         int dis=0;
        //         unordered_map<int,int>v;
        //         for(int k=i;k<=j;k++){
        //             if(v.find(nums[k])==v.end()){
        //                 v[nums[k]]=1;
        //                 dis++;
        //             }
        //         }
        //         v.clear();
        //         ans+=(dis*dis);

        //     }
        // }
        // return ans;
    }
};