class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + indexDifference; j < nums.size(); j++) {
                if (abs(nums[i] - nums[j]) >= valueDifference) {
                    return vector<int> {i, j};
                }
            }
        }
        return vector<int> {-1, -1};
    }
};
