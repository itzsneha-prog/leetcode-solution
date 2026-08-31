class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>h;
        h=heights;
        sort(h.begin(),h.end());
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=h[i]){
                count++;
            }
        }
        return count;
    }
};