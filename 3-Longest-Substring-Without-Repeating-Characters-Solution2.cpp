class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> letter_index;
        int longestLength = 0;
        int lowerBound = -1;
        for (int i = 0; i < s.size(); i++) {
            if (letter_index.count(s[i]) != 0) {
                lowerBound = max(lowerBound, letter_index[s[i]]);
            }
            longestLength = max(longestLength, i - lowerBound);
            letter_index[s[i]] = i;
        }
        return longestLength;
    }
};
