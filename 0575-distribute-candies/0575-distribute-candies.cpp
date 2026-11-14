class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size()/2;
        int ans=0;
        int m=1;
        sort(candyType.begin(),candyType.end());
        for(int i=1;i<candyType.size();i++){
            if(candyType[i]!=candyType[i-1]){
                m++;
            }
        }
        
        return min(m,n);
    }
};