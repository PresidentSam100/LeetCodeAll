class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int minSum = -1;
        int n = nums.size();
        int leftMin[n];
        int rightMin[n];
        leftMin[0] = nums[0];
        rightMin[n - 1] = nums[n - 1];
        for (int i = 1; i < n; i++) {
            leftMin[i] = min(leftMin[i - 1], nums[i]);
        }
        for (int i = n - 2; i >= 0; i--) {
            rightMin[i] = min(rightMin[i + 1], nums[i]);
        }
        for (int i = 1; i < n - 1; i++) {
            if (leftMin[i - 1] < nums[i] && rightMin[i + 1] < nums[i]) {
                if (minSum == -1) {
                    minSum = leftMin[i - 1] + nums[i] + rightMin[i + 1];
                } else {
                    minSum = min(minSum, leftMin[i - 1] + nums[i] + rightMin[i + 1]);
                }
            }
        }
        return minSum;
    }
};
