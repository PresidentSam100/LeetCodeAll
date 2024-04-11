class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int small = 0;
        int count = 0;
        for (int num : nums) {
            if (num < target) {
                small++;
            } else if (num == target) {
                count++;
            }
        }
        vector<int> targetIndices;
        for(int index = small; index < small + count; index++)      
            targetIndices.push_back(index);
        return targetIndices;
    }
};
