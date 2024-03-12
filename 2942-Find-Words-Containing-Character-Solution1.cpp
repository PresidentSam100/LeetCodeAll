class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> indexes;
        for (int i = 0; i < words.size(); i++) {
            if (words[i].find(x) != -1) {
                indexes.push_back(i);
            }
        }
        return indexes;
    }
};
