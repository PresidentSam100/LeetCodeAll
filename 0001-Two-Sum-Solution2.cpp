class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> element_index;
        vector<int> twoSumIndices;
        for (int i = 0; i < nums.size(); i++) {
            if (element_index.count(target - nums[i]) != 0) {
                twoSumIndices.push_back(element_index.at(target - nums[i]));
                twoSumIndices.push_back(i);
                return twoSumIndices;
            } else {
                element_index.insert({nums[i], i});
            }
        }
        return twoSumIndices;
    }
};
