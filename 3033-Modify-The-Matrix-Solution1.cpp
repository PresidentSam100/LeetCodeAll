class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> ans;
        for (int i = 0; i < m; i++) {
            vector<int> row;
            for (int j = 0; j < n; j++) {
                int element = matrix[i][j];
                if (element == -1) {
                    for (int k = 0; k < m; k++) {
                        element = max(element, matrix[k][j]);
                    }
                }
                row.push_back(element);
            }
            ans.push_back(row);
        }
        return ans;
    }
};
