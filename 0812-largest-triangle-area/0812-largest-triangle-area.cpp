class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double ans=INT_MIN;
        int x1,x2,x3,y1,y2,y3;
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++){
                for(int k=j+1;k<points.size();k++){
                     x1=points[i][0]-points[j][0];
                    x2=points[j][0]-points[k][0];
                    x3=points[i][0]-points[k][0];
                    y1=points[i][1]-points[j][1];
                    y2=points[j][1]-points[k][1];
                    y3=points[i][1]-points[k][1];
                    double prod=0.5*abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
                    ans=max(ans,prod);
                }
            }
        }
        return ans;
    }
};