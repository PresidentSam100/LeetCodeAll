class Solution {
public:
    bool bfs(vector<vector<int>>& grid, int n, int mid) {
        unordered_set<string> visited;
        queue<pair<int, int>> q;
        q.push({0, 0});
        while (!q.empty()) {
            auto curr = q.front();
            q.pop();
            int row = curr.first;
            int col = curr.second;
            string visit = to_string(row) + "," + to_string(col);
            if (row < 0 || col < 0 || row >= n || col >= n || visited.find(visit) != visited.end() || grid[row][col] > mid) {
                continue;
            }
            if (row == n - 1 && col == n - 1) {
                return true;
            }           
            visited.insert(visit);
            q.push({row - 1, col});
            q.push({row + 1, col});
            q.push({row, col - 1});
            q.push({row, col + 1});
        }
        return false;
    }

    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        int lo = 0;
        int hi = n * n;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            bool work = bfs(grid, n, mid);
            if (work) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return lo;
    }
};
