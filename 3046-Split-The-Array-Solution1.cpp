class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int curr = 0;
        int count = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == curr) {
                count++;
            } else {
                count = 1;
                curr = nums[i];
            }
            if (count > 2) {
                return false;
            }
        }
        return true;
    }
};
