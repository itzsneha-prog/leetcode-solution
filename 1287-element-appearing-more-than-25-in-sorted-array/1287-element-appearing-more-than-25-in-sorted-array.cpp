class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        float n=arr.size()/4;
        float count=0;
        for(int i=0;i<arr.size();i++){
            count=0;
            for(int j=0;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    count++;
                    if(count>n){
                        return arr[i];
                    }
                }
            }
        }
        return -1;
    }
};