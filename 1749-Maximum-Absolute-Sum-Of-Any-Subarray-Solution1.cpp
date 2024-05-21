class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currPosSum = 0;
        int currNegSum = 0;
        int bestAbsSum = INT_MIN;
        for (auto x : nums) {
            currPosSum += x;
            currNegSum += x;
            if (currPosSum > bestAbsSum) {
                bestAbsSum = currPosSum;
            }
            if (-currNegSum > bestAbsSum) {
                bestAbsSum = -currNegSum;
            }
            if (currPosSum < 0) {
                currPosSum = 0;
            }
            if (currNegSum > 0) {
                currNegSum = 0;
            }
        }
        return bestAbsSum;
    }
};
