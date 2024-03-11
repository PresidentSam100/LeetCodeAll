class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int index = 0;
        if (s1.size() < s2.size()) {
            swap(s1, s2);
        }
        if (s2.size() < s3.size()) {
            swap(s2, s3);
        }
        while (index < s3.size() && s1[index] == s2[index] && s2[index] == s3[index]) {
            index++;
        }
        if (index == 0) {
            return -1;
        } else {
            return s1.size() + s2.size() + s3.size() - index * 3;
        }
    }
};
