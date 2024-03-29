class Solution {
public:
    int minimumMoves(string s) {
        int minMoves = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'X') {
                minMoves++;
                i += 2;
            }
        }
        return minMoves;
    }
};
