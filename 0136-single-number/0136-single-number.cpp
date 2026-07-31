class Solution {
public:
    int singleNumber(vector<int>& nums) {
     unordered_map<int,int>freq;
     int n=nums.size();
     for(int i=0;i<n;i++){
        freq[nums[i]]++;
     }
     int m=freq.size();
     for( auto &i : freq){
        if(i.second==1){
            return i.first;
        }
     }
     return -1;

    }
};