class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int maxV=INT_MIN;
        while(left<right){
            int h=min(height[left],height[right]);
            int vol=(right-left)*h;
            maxV=max(vol,maxV);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxV;
    }
};