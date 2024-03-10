class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        for (int c = 0; c < grid.size(); c++) {
            bool champion = true;
            for (int r = 0; r < grid.size(); r++) {
                if (grid[r][c] == 1) {
                    champion = false;
                    break;
                }
            }
            if (champion) {
                return c;
            }
        }
        return -1;
    }
};
