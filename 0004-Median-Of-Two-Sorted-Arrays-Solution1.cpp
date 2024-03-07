class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> combined;
        combined.insert(combined.end(), nums1.begin(), nums1.end());
        combined.insert(combined.end(), nums2.begin(), nums2.end());
        sort(combined.begin(), combined.end());
        int n = combined.size();
        if (combined.size() % 2 == 1) {
            return (double)combined[n / 2];
        } else {
            return (double)(combined[n / 2] + combined[n / 2 - 1]) / 2;
        }
    }
};
