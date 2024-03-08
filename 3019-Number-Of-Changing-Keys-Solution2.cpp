class Solution {
public:
    int countKeyChanges(string s) {
        char prev = ' ';
        int ans = -1;
        for (char c : s) {
            c = toupper(c);
            if (prev != c) {
                ans++;
            }
            prev = c;
        }
        return ans;
    }
};
