class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDiff = 0;
        int minElem = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            minElem = min(minElem, nums[i]);
            maxDiff = max(maxDiff, nums[i] - minElem);
        }
        return maxDiff == 0 ? -1 : maxDiff;
    }
};
