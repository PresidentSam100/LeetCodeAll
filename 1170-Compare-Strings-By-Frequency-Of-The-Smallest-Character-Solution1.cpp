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
        vector<int> freqs;
        for (auto word : words) {
            freqs.push_back(frequency(word));
        }
        sort(freqs.begin(), freqs.end());
        for (auto query : queries) {
            int queryFreq = frequency(query);
            int index = upper_bound(freqs.begin(), freqs.end(), queryFreq) - freqs.begin();
            ans.push_back(n - index);
        }
        return ans;
    }
};
