class Solution {
public:
    string finalString(string s) {
        string current = "";
        for (char letter : s) {
            if (letter == 'i') {
                reverse(current.begin(), current.end());
            } else {
                current += letter;
            }
        }
        return current;
    }
};
