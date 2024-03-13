class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums2.begin(), nums2.end());
        int countNums1 = 0;
        for (int num : nums1) {
            if (set1.contains(num)) {
                countNums1++;
            }
        }
        unordered_set<int> set2(nums1.begin(), nums1.end());
        int countNums2 = 0;
        for (int num : nums2) {
            if (set2.contains(num)) {
                countNums2++;
            }
        }
        return vector<int> {countNums1, countNums2};
    }
};
