class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        for (int r = 0; r < grid.size(); r++) {
            bool champion = true;
            for (int c = 0; c < grid.size(); c++) {
                if (r == c) {
                    continue;
                }
                if (grid[r][c] != 1) {
                    champion = false;
                    break;
                }
            }
            if (champion) {
                return r;
            }
        }
        return -1;
    }
};
