class Solution {
public:
    int minimumPushes(string word) {
        int pushes = 0;
        int div = word.size() / 8;
        int rem = word.size() % 8;
        int row = 1;
        while (div--) {
            pushes += 8 * row;
            row++;
        }
        pushes += rem * row;
        return pushes;
    }
};
