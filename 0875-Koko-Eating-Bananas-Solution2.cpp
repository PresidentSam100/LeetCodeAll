class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lower = 1;
        int higher = *max_element(piles.begin(), piles.end());
        while (lower <= higher) {
            int middle = (lower + higher) / 2;
            long neededHours = 0;
            for (int i = 0; i < piles.size(); i++) {
                neededHours += ceil(piles[i] * 1.0 / middle);
            }
            if (neededHours <= h) {
                higher = middle - 1;
            } else {
                lower = middle + 1;
            }
        }
        return lower;
    }
};
