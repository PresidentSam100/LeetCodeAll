class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> ans(m, vector<int>(n));
        for (int c = 0; c < n; c++) {
            int maximum = -1;
            for (int r = 0; r < m; r++) {
                maximum = max(maximum, matrix[r][c]);
            }
            for (int r = 0; r < m; r++) {
                if (matrix[r][c] == -1) {
                    ans[r][c] = maximum;
                } else {
                    ans[r][c] = matrix[r][c];
                }
            }
        }
        return ans;
    }
};
