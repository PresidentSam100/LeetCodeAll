class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int lower = 0;
        long long int higher = *max_element(piles.begin(), piles.end());
        long long int minK = higher;
        while (lower <= higher) {
            long long int middle = (lower + higher) / 2;
            if (middle == 0) {
                break;
            }
            long long int neededHours = 0;
            for (int i = 0; i < piles.size(); i++) {
                neededHours += ceil(piles[i] * 1.0 / middle);
            }
            if (neededHours <= h) {
                higher = middle - 1;
                minK = min(minK, middle);
            } else {
                lower = middle + 1;
            }
        }
        return (int)minK;
    }
};
