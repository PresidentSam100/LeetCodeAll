class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int prefixSuffixPairCount = 0;
        int n = words.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (words[j].starts_with(words[i]) && words[j].ends_with(words[i])) {
                    prefixSuffixPairCount++;
                }
            }
        }
        return prefixSuffixPairCount;
    }
};
