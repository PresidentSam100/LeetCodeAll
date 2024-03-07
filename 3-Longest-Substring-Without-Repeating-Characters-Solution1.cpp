class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> letter_index(128, -1);
        int longestLength = 0;
        int lowerBound = -1;
        for (int i = 0; i < s.size(); i++) {
            if (letter_index[s[i]] != -1) {
                lowerBound = max(lowerBound, letter_index[s[i]]);
            }
            longestLength = max(longestLength, i - lowerBound);
            letter_index[s[i]] = i;
        }
        return longestLength;
    }
};
