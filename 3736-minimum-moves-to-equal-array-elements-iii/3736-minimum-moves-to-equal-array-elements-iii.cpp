class Solution {
public:
    int minMoves(vector<int>& nums) {
        int move=0;
        int m=INT_MIN;
        for(int i=0;i<nums.size();i++){
            m=max(nums[i],m);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<m){
                while(nums[i]!=m){
                    nums[i]++;
                    move++;
                }
            }
        }
        return move;
    }
};