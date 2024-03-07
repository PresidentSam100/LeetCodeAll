class Solution {
public:
    string longestPalindrome(string s) {
        string longest = "";
        for (int i = 0; i < s.size(); i++) {
            int left = i - 1;
            int right = i + 1;
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                left--;
                right++;
            }
            if (longest.size() < right - left - 1) {
                longest = s.substr(left + 1, right - left - 1);
            }
            if (i != 0 && s[i] == s[i - 1]) {
                left = i - 2;
                right = i + 1;
                while (left >= 0 && right < s.size() && s[left] == s[right]) {
                    left--;
                    right++;
                }
                if (longest.size() < right - left - 1) {
                    longest = s.substr(left + 1, right - left - 1);
                }
            }
        }
        return longest;
    }
};
