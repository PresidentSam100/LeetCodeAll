class Solution {
public:
    string finalString(string s) {
        string current = "";
        for (int stringIndex = 0; stringIndex < s.size(); stringIndex++) {
            char letter = s[stringIndex];
            if (letter == 'i') {
                reverse(current.begin(), current.end());
            } else {
                current.push_back(letter);
            }
        }
        return current;
    }
};
