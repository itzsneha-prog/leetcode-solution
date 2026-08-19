class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            bool skipOuter=false;
            int j=0;
            while(nums1[i]!=nums2[j]){
                j++;
            }
            j=j+1;
            while(j<nums2.size()){
                if(nums2[j]>nums1[i]){
                    ans.push_back(nums2[j]);
                    skipOuter=true;
                    break;
                }
                j++;
            }
            if(skipOuter==true){
                continue;
            }
            ans.push_back(-1);
        }
        return ans;
    }
};