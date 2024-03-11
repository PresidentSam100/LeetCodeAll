class Solution {
public:
    int distributeCandies(int n, int limit) {
        int distributions = 0;
        for (int i = 0; i <= limit; i++) {
            for (int j = 0; j <= limit; j++) {
                int k = n - i - j;
                if (0 <= k && k <= limit) {
                    distributions++;
                }
            }
        }
        return distributions;
    }
};
