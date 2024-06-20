class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> townTrust(n, 0);
        for (int i = 0; i < trust.size(); i++) {
            townTrust[trust[i][0] - 1]--;
            townTrust[trust[i][1] - 1]++;
        }
        for (int i = 0; i < n; i++) {
            if (townTrust[i] == n - 1) {
                return i + 1;
            }
        }
        return -1;
    }
};
