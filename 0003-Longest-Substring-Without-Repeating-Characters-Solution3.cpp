class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charPos;
        int left = -1;
        int right = 0;
        int ans = 0;
        for (char ch : s) {
            if (charPos.count(ch) != 0) {
                left = max(left, charPos[ch]);
            }
            ans = max(ans, right - left);
            charPos[ch] = right++;
        }
        return ans;
    }
};
