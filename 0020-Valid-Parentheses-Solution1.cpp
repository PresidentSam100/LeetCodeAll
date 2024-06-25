class Solution {
public:
    bool isValid(string s) {
        stack<int> chars;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                chars.push(s[i]);
            }
            if (s[i] == ')') {
                if (!chars.empty() && chars.top() == '(') {
                    chars.pop();
                } else {
                    return false;
                }
            }
            if (s[i] == '}') {
                if (!chars.empty() && chars.top() == '{') {
                    chars.pop();
                } else {
                    return false;
                }
            }
            if (s[i] == ']') {
                if (!chars.empty() && chars.top() == '[') {
                    chars.pop();
                } else {
                    return false;
                }
            }
        }
        return chars.empty();
    }
};
