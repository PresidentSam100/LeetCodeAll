class Solution {
public:
    int frequency(string word) {
        char smallest = word[0];
        int count = 0;
        for (auto x : word) {
            if (x < smallest) {
                smallest = x;
                count = 1;
            } else if (x == smallest) {
                count++;
            }
        }
        return count;
    }

    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        int n = words.size();
        vector<int> ans;
        int freqs[11];
        for (auto word : words) {
            freqs[frequency(word) - 1]++;
        }
        for (int i = 10; i >= 1; i--) {
            freqs[i - 1] += freqs[i];
        }
        for (auto query : queries) {
            ans.push_back(freqs[frequency(query)]);
        }
        return ans;
    }
};
