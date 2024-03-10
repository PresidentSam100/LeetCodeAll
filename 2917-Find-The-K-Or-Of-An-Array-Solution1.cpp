class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int bits[32];
        for (int num : nums) {
            int pos = 0;
            while (num > 0) {
                bits[pos] += num & 1;
                num >>= 1;
                pos++;
            }
        }
        int ans = 0;
        for (int i = 0; i < 32; i++) {
            if (bits[i] >= k) {
                ans += pow(2, i);
            }
        }
        return ans;
    }
};
