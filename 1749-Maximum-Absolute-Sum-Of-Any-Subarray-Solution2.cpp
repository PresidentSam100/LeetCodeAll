class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currPosSum = 0;
        int currNegSum = 0;
        int bestAbsSum = INT_MIN;
        for (auto x : nums) {
            currPosSum += x;
            currNegSum += x;
            bestAbsSum = max({bestAbsSum, currPosSum, -currNegSum});
            currPosSum = max(currPosSum, 0);
            currNegSum = min(currNegSum, 0);
        }
        return bestAbsSum;
    }
};
