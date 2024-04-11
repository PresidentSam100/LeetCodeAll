class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int index = 0;
        int curr = 1;
        int kth = 0;
        while (kth < k) {
            if (index < arr.size() && arr[index] == curr) {
                index++;
            } else {
                kth++;
            }
            curr++;
        }
        return curr - 1;
    }
};
