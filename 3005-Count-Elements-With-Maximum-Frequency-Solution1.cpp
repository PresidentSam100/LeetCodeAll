class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> element_counts;
        for (int i = 0; i < nums.size(); i++) {
            element_counts[nums[i]]++;
        }
        int freqTotal = 1;
        int freqValue = 0;
        for (auto x : element_counts) {
            if (x.second > freqValue) {
                freqTotal = x.second;
                freqValue = x.second;
            } else if (x.second == freqValue) {
                freqTotal += x.second;
            }
        }
        return freqTotal;
    }
};
