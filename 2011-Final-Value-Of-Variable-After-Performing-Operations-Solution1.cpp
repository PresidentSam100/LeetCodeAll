class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i].find("--") != -1) {
                x--;
            } else if (operations[i].find("++") != -1) {
                x++;
            }
        }
        return x;
    }
};
