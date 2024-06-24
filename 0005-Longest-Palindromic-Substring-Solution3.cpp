class Solution {
public:
    string longestPalindrome(string s) {
        int maxLen = 0;
        string ans = "";
        s = "#" + regex_replace(s, regex(""), "#") + "#";
        vector<int> dp(s.length(), 0);
        int center = 0;
        int right = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i < right) {
                dp[i] = min(right - i, dp[2 * center - i]);
            }
            while (i - dp[i] >= 1 && i + dp[i] + 1 < s.length() && s[i - dp[i] - 1] == s[i + dp[i] + 1]) {
                dp[i]++;
            }
            if (i + dp[i] > right) {
                center = i;
                right = i + dp[i];
            }
            if (dp[i] > maxLen) {
                ans = s.substr(i - dp[i], 2 * dp[i] + 1);
                ans.erase(remove(ans.begin(), ans.end(), '#'), ans.end());
                maxLen = dp[i];
            }
        }
        return ans;
    }
};
