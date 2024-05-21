class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = 0;
        int col = n - 1;
        while (row < m && col >= 0) {
            int temp = matrix[row][col];
            if (temp < target) {
                row++;
            } else if (temp > target) {
                col--;
            } else {
                return true;
            }
        }
        return false;
    }
};
