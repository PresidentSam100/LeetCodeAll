class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int lo = *max_element(weights.begin(), weights.end());
        int hi = accumulate(weights.begin(), weights.end(), 0);
        while (lo <= hi) {
            int mid = (lo + hi) / 2;

            int totalWeight = mid;
            int tempDays = days;
            int weightIndex = 0;

            while (weightIndex < weights.size() && tempDays > 0) {
                if (totalWeight - weights[weightIndex] >= 0) {
                    totalWeight -= weights[weightIndex];
                    weightIndex++;
                } else {
                    tempDays--;
                    totalWeight = mid;
                }
            }

            if (weightIndex == weights.size()) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return lo;
    }
};
