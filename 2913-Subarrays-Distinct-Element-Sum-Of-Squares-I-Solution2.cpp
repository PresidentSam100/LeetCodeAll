class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int distinctCountSquares = 0;
        for (int i = 0; i < nums.size(); i++) {
            unordered_set<int> distinct;
            for (int j = i; j < nums.size(); j++) {
                distinct.insert(nums[j]);
                distinctCountSquares += distinct.size() * distinct.size();
            }
        }
        return distinctCountSquares;
    }
};
