class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (string operation : operations) {
            if (operation == "X--" || operation == "--X") {
                x--;
            } else if (operation == "X++" || operation == "++X") {
                x++;
            }
        }
        return x;
    }
};
