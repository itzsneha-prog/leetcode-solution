class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                int count=0;
                int sum=0;
                for(int k=i;k<=j;k++){
                    sum+=arr[k];
                    count++;
                }
                if(count%2!=0){
                    ans+=sum;
                }
            }
        }
        return ans;
    }
};