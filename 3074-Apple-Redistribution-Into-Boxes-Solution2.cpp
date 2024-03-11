class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end());
        int minBoxes = 0;
        int totalApples = accumulate(apple.begin(), apple.end(), 0);
        while (minBoxes < capacity.size() && totalApples > 0) {
            totalApples -= capacity[capacity.size() - 1 - minBoxes];
            minBoxes++;
        }
        return minBoxes;
    }
};
