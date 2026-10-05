class Solution {
public:
    int trap(vector<int>& height) {
        int water=height[0];
        vector<int>right(height.size(),0);
        vector<int>left(height.size(),0);
        for(int i=height.size()-2;i>=0;i--){
            int m=max(height[i+1],right[i+1]);
            right[i]=m;
        }
        for(int i=1;i<height.size();i++){
            int m=max(height[i-1],left[i-1]);
            left[i]=m;
        }

        int ans=0;
        for(int i=0;i<height.size();i++){
            int water_level=min(left[i],right[i]);
            int m=water_level-height[i];
            if(m>=0){
                ans+=m;
            }
        }
        return ans;
    }
};