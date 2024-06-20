class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int rookRow = -1;
        int rookCol = -1;
        for (int r = 0; r < 8; r++) {
            for (int c = 0; c < 8; c++) {
                if (board[r][c] == 'R') {
                    rookRow = r;
                    rookCol = c;
                    break;
                }
            }
        }
        int captures = 0;
        int rows[4] = {-1, 0, 1, 0};
        int cols[4] = {0, -1, 0, 1};
        for (int i = 0; i < 4; i++) {
            int tempRow = rookRow;
            int tempCol = rookCol;
            while (tempRow >= 0 && tempCol >= 0 && tempRow < 8 && tempCol < 8) {
                if (board[tempRow][tempCol] == 'p') {
                    captures++;
                    break;
                } else if (board[tempRow][tempCol] == 'B') {
                    break;
                }
                tempRow += rows[i];
                tempCol += cols[i];
            }
        }
        return captures;
    }
};
