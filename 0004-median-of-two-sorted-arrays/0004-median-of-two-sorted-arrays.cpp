class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // vector<int>numsadd=nums1;
        // numsadd.insert(numsadd.end(),nums2.begin(),nums2.end());
        // sort(numsadd.begin(),numsadd.end());
        // int n=numsadd.size();
        // if(n%2==0){
        //     int mid=n/2;
        //     double median=(numsadd[mid]+numsadd[mid-1])/2.0;
        //     return median;
        // }else{
        //     int mid=n/2;
        //     return numsadd[mid];
        // }

        vector<int>numsadd;
        int n=nums1.size();
        int m=nums2.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                numsadd.push_back(nums1[i]);
                i++;
            }else {
                numsadd.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            numsadd.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            numsadd.push_back(nums2[j]);
            j++;
        }
        int z=(m+n)/2;
        if((m+n)%2==0){
            
            return (numsadd[z]+numsadd[z-1])/2.0;
        }else{
            return numsadd[z];
        }
    }
};