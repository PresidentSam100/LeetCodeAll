class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int distinctCountSquares = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                unordered_set<int> subarray(nums.begin() + i, nums.begin() + j + 1);
                distinctCountSquares += subarray.size() * subarray.size();
            }
        }
        return distinctCountSquares;
    }
};
