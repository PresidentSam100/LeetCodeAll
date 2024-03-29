class Solution {
public:
    int minimumMoves(string s) {
        int minMoves = 0;
        int offset = 0;
        while (s.find('X', offset) != -1) {
            offset = s.find('X', offset) + 3;
            minMoves++;
        }
        return minMoves;
    }
};
