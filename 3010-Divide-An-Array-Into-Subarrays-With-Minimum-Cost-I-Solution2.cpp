class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int zero = nums[0];
        int minOne = INT_MAX;
        int minTwo = INT_MAX;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < minOne) {
                minTwo = minOne;
                minOne = nums[i];
            } else if (nums[i] < minTwo) {
                minTwo = nums[i];
            }
        }
        return zero + minOne + minTwo;
    }
};
