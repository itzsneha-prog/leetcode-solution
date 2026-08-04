class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();//row
        int n=matrix[0].size();//col
        int col=n-1;
        int fixrow=0;
        int st=0;
        int end=n-1;
        int endR=m-1;
        
        while(st<=endR){
            int midR=st+(endR-st)/2;
            if(matrix[midR][0]<=target && matrix[midR][col]>=target){
                fixrow=midR;
                break;
            }else if(matrix[midR][0]>target){
                endR=midR-1;
            }else if(matrix[midR][0]<target){
                st=midR+1;
            }else{
                return false;
            }
        }
        st=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(matrix[fixrow][mid]==target){
                return true;
            }else if(matrix[fixrow][mid]<target){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        // while(col>=0 && row<m){
        //     int curr=matrix[row][col];

        //     if(curr>target){
        //         col--;
        //     }else if(curr<target){
        //         row++;
        //     }else{
        //         return true;
        //     }

        // }
        return false;
    }
};