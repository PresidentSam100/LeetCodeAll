class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> peakIndexes;
        for (int i = 1; i < mountain.size() - 1; i++) {
            if (mountain[i - 1] < mountain[i] && mountain[i] > mountain[i + 1]) {
                peakIndexes.push_back(i);
            }
        }
        return peakIndexes;
    }
};
