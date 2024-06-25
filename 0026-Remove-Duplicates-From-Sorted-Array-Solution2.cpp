class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int prev = INT_MIN;
        for (int num : nums) {
            if (num != prev) {
                nums[k++] = num;
            }
            prev = num;
        }
        return k;
    }
};
