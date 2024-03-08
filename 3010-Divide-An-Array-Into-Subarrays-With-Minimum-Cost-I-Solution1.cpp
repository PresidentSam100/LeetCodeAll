class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int minSum = nums[0];
        sort(nums.begin() + 1, nums.end());
        return minSum + nums[1] + nums[2];
    }
};
