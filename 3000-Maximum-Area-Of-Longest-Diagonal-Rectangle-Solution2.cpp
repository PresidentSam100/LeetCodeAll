class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxArea = 0;
        int maxDiagonal = 0;
        for (const auto& rectangle : dimensions) {
            int l1 = rectangle[0];
            int l2 = rectangle[1];
            int diagonal = l1 * l1 + l2 * l2;
            if (diagonal > maxDiagonal) {
                maxArea = l1 * l2;
                maxDiagonal = diagonal;
            } else if (diagonal == maxDiagonal) {
                maxArea = max(maxArea, l1 * l2);
            }
        }
        return maxArea;
    }
};
