class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int countNums1 = 0;
        for (int num : nums1) {
            if (count(nums2.begin(), nums2.end(), num)) {
                countNums1++;
            }
        }
        int countNums2 = 0;
        for (int num : nums2) {
            if (count(nums1.begin(), nums1.end(), num)) {
                countNums2++;
            }
        }
        return vector<int> {countNums1, countNums2};
    }
};
