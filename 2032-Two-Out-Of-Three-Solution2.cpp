class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, set<int>> countArrayPresence;
        for (int num : nums1) {
            countArrayPresence[num].insert(1);
        }
        for (int num : nums2) {
            countArrayPresence[num].insert(2);
        }
        for (int num : nums3) {
            countArrayPresence[num].insert(3);
        }
        vector<int> twoOutOfThreeValues;
        for (auto pair : countArrayPresence) {
            if (pair.second.size() >= 2) {
                twoOutOfThreeValues.push_back(pair.first);
            }
        }
        return twoOutOfThreeValues;
    }
};
