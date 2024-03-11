class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxXOR = 0;
        for (int x = 0; x < nums.size(); x++) {
            for (int y = x; y < nums.size(); y++) {
                if (abs(nums[x] - nums[y]) <= min(nums[x], nums[y])) {
                    maxXOR = max(maxXOR, nums[x] ^ nums[y]);
                } else {
                    break;
                }
            }
        }
        return maxXOR;
    }
};
