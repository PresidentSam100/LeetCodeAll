class Solution {
public:
    bool isValid(string s) {
        stack<char> chars;
        for (char c : s) {
            if (c == '(') {
                chars.push(')');
            } else if (c == '{') {
                chars.push('}');
            } else if (c == '[') {
                chars.push(']');
            } else if (chars.empty() || chars.top() != c) {
                return false;
            } else {
                chars.pop();
            }
        }
        return chars.empty();
    }
};
