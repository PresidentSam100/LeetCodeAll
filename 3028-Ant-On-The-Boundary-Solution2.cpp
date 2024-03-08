class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int ans = 0;
        int pos = 0;
        for (int elem : nums) {
            pos += elem;
            if (pos == 0) {
                ans++;
            }
        }
        return ans;
    }
};
