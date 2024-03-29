class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, int> countArrayPresence;
        unordered_set<int> arraySet1(nums1.begin(), nums1.end());
        unordered_set<int> arraySet2(nums2.begin(), nums2.end());
        unordered_set<int> arraySet3(nums3.begin(), nums3.end());
        for (int num : arraySet1) {
            countArrayPresence[num]++;
        }
        for (int num : arraySet2) {
            countArrayPresence[num]++;
        }
        for (int num : arraySet3) {
            countArrayPresence[num]++;
        }
        vector<int> twoOutOfThreeValues;
        for (auto pair : countArrayPresence) {
            if (pair.second >= 2) {
                twoOutOfThreeValues.push_back(pair.first);
            }
        }
        return twoOutOfThreeValues;
    }
};
