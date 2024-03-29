class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int countPairsDiffK = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++){
            int l = lower_bound(nums.begin(), nums.end(), nums[i] + k) - nums.begin();
            int r = upper_bound(nums.begin(), nums.end(), nums[i] + k) - nums.begin();
            countPairsDiffK += (r - l);
        }
        return countPairsDiffK;
    }
};
