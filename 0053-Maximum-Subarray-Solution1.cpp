class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int bestSum = INT_MIN;
        for (auto x : nums) {
            currSum += x;
            if (currSum > bestSum) {
                bestSum = currSum;
            }
            if (currSum < 0) {
                currSum = 0;
            }
        }
        return bestSum;
    }
};
