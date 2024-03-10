class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int minSum = -1;
        for (int i = 0; i < nums.size() - 2; i++) {
            for (int j = i + 1; j < nums.size() - 1; j++) {
                for (int k = j + 1; k < nums.size(); k++) {
                    if (nums[i] < nums[j] && nums[k] < nums[j]) {
                        if (minSum == -1) {
                            minSum = nums[i] + nums[j] + nums[k];
                        } else {
                            minSum = min(minSum, nums[i] + nums[j] + nums[k]);
                        }
                    }
                }
            }
        }
        return minSum;
    }
};
