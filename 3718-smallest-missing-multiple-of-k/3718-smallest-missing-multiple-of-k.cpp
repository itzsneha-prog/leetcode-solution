class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        //optimal approach
        int n=2;
        int m=k;
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        while(s.find(m)!=s.end()){
            m=k*n;
            n++;
        }
        return m;

        //T.C=O(nlogn)
        // int n=2;
        // int m=k;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==m){
        //         m=k*n;
        //         n++;
        //     }
        // }

        // return m;
    }
};