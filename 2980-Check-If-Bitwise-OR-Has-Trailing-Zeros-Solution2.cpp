class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int even = 0;
        for (int num : nums) {
            if ((num & 1) == 0) {
                even++;
            }
        }
        return even >= 2;
    }
};
