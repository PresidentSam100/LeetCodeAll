class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int prefixSuffixPairCount = 0;
        int n = words.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (valid(words[i], words[j])) {
                    prefixSuffixPairCount++;
                }
            }
        }
        return prefixSuffixPairCount;
    }

    bool valid(string &a, string &b) {
        if (a.length() > b.length()) {
            return false;
        }
        if (a != b.substr(0, a.size())) {
            return false;
        }
        if (a != b.substr(b.size() - a.size())) {
            return false;
        }
        return true;
    }
};
