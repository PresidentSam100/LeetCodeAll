class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> integer_count;
        for (int i = 0; i < nums.size(); i++) {
            integer_count[nums[i]]++;
        }
        for (auto x : integer_count) {
            if (x.second > 2) {
                return false;
            }
        }
        return true;
    }
};
