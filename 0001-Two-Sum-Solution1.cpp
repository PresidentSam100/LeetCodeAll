class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> twoSumIndices;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    twoSumIndices.push_back(i);
                    twoSumIndices.push_back(j);
                    return twoSumIndices;
                }
            }
        }
        return twoSumIndices;
    }
};
