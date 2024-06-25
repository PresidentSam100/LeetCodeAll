class Solution {
public:
    bool isValid(string s) {
        stack<int> chars;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                chars.push(s[i]);
            } else if (chars.empty()) {
                return false;
            } else if (s[i] == ')' && chars.top() == '(') {
                chars.pop();
            } else if (s[i] == '}' && chars.top() == '{') {
                chars.pop();
            } else if (s[i] == ']' && chars.top() == '[') {
                chars.pop();
            } else {
                return false;
            }
        }
        return chars.empty();
    }
};
