class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int bestSum = INT_MIN;
        for (auto x : nums) {
            currSum += x;
            bestSum = max(bestSum, currSum);
            currSum = max(currSum, 0);
        }
        return bestSum;
    }
};
