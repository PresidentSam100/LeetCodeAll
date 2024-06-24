class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> visited;
        vector<int> ans;
        int index = 0;
        for (int num : nums) {
            if (visited.count(target - num) != 0) {
                return {visited[target - num], index};
            }
            visited[num] = index++;
        }
        return {};
    }
};
