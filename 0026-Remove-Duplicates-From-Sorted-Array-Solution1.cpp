class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int prev = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != prev) {
                nums[k++] = nums[i];
            }
            prev = nums[i];
        }
        return k;
    }
};
