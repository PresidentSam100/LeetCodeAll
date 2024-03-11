class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end());
        int minBoxes = 0;
        int totalApples = accumulate(apple.begin(), apple.end(), 0);
        int index = capacity.size() - 1;
        while (index >= 0 && totalApples > 0) {
            totalApples -= capacity[index];
            index--;
            minBoxes++;
        }
        return minBoxes;
    }
};
