class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> distinct(nums1.begin(), nums1.end());
        vector<int> intersection;
        for (int num : nums2) {
            if (distinct.find(num) != distinct.end()) {
                intersection.push_back(num);
                distinct.erase(num);
            }
        }
        return intersection;
    }
};
