class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int area = 0;
        double maxDiagonal = 0;
        for (int i = 0; i < dimensions.size(); i++) {
            int l1 = dimensions[i][0];
            int l2 = dimensions[i][1];
            double diagonal = sqrt(l1 * l1 + l2 * l2);
            if (diagonal > maxDiagonal) {
                area = l1 * l2;
                maxDiagonal = diagonal;
            } else if (diagonal == maxDiagonal) {
                area = max(area, l1 * l2);
            }
        }
        return area;
    }
};
