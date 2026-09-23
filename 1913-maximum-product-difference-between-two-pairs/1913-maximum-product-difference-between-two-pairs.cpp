class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int m1=INT_MIN;
        int m2=INT_MIN;
        int min1=INT_MAX;
        int min2=INT_MAX;

        for(int i=0;i<nums.size();i++){
            
            if(nums[i]>m1){
                m2=m1;
                m1=nums[i];
            }else if(nums[i]>m2){
                m2=nums[i];
            }
            if(nums[i]<min1){
                min2=min1;
                min1=nums[i];
            }else if(nums[i]<min2){
                min2=nums[i];
            }
        }

        
        return (m1*m2)-(min1*min2);





        // vector<int>prod;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         prod.push_back(nums[i]*nums[j]);
        //     }
        // }
        // int Max=INT_MIN;
        // int Min=INT_MAX;
        // for(int i=0;i<prod.size();i++){
        //     Max=max(Max,prod[i]);
        //     Min=min(Min,prod[i]);
        // }
        // return Max-Min;
    }
};