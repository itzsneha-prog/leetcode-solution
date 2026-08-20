class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>answer;
        int n=nums1.size();
        int m=nums2.size();
        if(n<=m){
            
            for(int i=0;i<n;i++){
                int ans=-1;
                bool duplicate=false;

                int st=0;
                int end=m-1;
                int mid;
                int tar=nums1[i];
                while(st<=end){
                    mid=st+(end-st)/2;
                    if(nums2[mid]==tar){
                        ans=nums2[mid];
                        break;
                    }else if(nums2[mid]>tar){
                        end=mid-1;
                    }else{
                        st=mid+1;
                    }
                }
                if(ans==-1){
                    continue;
                }else{
                    for(int j=0;j<answer.size();j++){
                        if(ans==answer[j]){
                            duplicate=true;
                            break;
                        }
                    }
                    if(duplicate==false){
                        answer.push_back(ans);
                    }else{
                        duplicate=false;
                    }
                }
            }
        }


        if(n>m){
            

            for(int i=0;i<m;i++){
                int ans=-1;
                bool duplicate=false;
                int st=0;
                int end=n-1;
                int mid;
                int tar=nums2[i];
                while(st<=end){
                    mid=st+(end-st)/2;
                    if(nums1[mid]==tar){
                        ans=nums1[mid];
                        break;
                    }else if(nums1[mid]>tar){
                        end=mid-1;
                    }else{
                        st=mid+1;
                    }
                }
                if(ans==-1){
                    continue;
                }else{
                    for(int j=0;j<answer.size();j++){
                        if(ans==answer[j]){
                            duplicate=true;
                            break;
                        }
                    }
                    if(duplicate==false){
                        answer.push_back(ans);
                    }else{
                        duplicate=false;
                    }
                }
            }
        }
        return answer; 
    }
};