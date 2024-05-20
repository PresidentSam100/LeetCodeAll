class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int distanceValue = arr1.size();
        for (int i = 0; i < arr1.size(); i++) {
            int lo = 0;
            int hi = arr2.size() - 1;
            int x = arr1[i] - d;
            int y = arr1[i] + d;
            while (lo <= hi) {
                int mid = (lo + hi) / 2;
                if (arr2[mid] < x) {
                    lo = mid + 1;
                } else if (arr2[mid] > y) {
                    hi = mid - 1;
                } else {
                    distanceValue--;
                    break;
                }
            }
        }
        return distanceValue;
    }
};
