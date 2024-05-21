class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int lo = *max_element(weights.begin(), weights.end());
        int hi = accumulate(weights.begin(), weights.end(), 0);
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            int currWeight = mid;
            int currDay = days;
            int weightIndex = 0;
            while (weightIndex < weights.size() && currDay > 0) {
                if (currWeight - weights[weightIndex] >= 0) {
                    currWeight -= weights[weightIndex];
                    weightIndex++;
                } else {
                    currDay--;
                    currWeight = mid;
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
