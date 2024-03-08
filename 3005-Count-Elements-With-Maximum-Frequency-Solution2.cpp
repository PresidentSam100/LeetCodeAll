class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> element_counts;
        int freqTotal = 0;
        int freqValue = 1;
        for (int i = 0; i < nums.size(); i++) {
            element_counts[nums[i]]++;
            int freq = element_counts[nums[i]];
            if (freq > freqValue) {
                freqTotal = freq;
                freqValue = freq;
            } else if (freq == freqValue) {
                freqTotal += freq;
            }
        }
        return freqTotal;
    }
};
