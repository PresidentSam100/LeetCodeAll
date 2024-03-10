class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int ans = 0;
        for (int i = 0; i < 32; i++) {
            int kor = 0;
            for (int num : nums) {
                kor += (num >> i) & 1;
            }
            if (kor >= k) {
                ans += pow(2, i);
            }
        }
        return ans;
    }
};
