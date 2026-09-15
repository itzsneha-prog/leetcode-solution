class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int dy = coordinates[1][1] - coordinates[0][1];
        int dx = coordinates[1][0] - coordinates[0][0];

        for(int i = 2; i < coordinates.size(); i++) {
            
            int dy1 = coordinates[i][1] - coordinates[0][1];
            int dx1 = coordinates[i][0] - coordinates[0][0];

            if(dy1 * dx != dx1 * dy) {
                return false;
            }
        }

        return true;
    }
};