class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int maxValue = INT_MIN;
        int maxIndex = -1;
        int minValue = INT_MAX;
        int minIndex = -1;
        for (int i = indexDifference; i < nums.size(); i++) {
            if (nums[i - indexDifference] < minValue) {
                minValue = nums[i - indexDifference];
                minIndex = i - indexDifference;
            }
            if (nums[i - indexDifference] > maxValue) {
                maxValue = nums[i - indexDifference];
                maxIndex = i - indexDifference;
            }
            if (abs(minIndex - i) >= indexDifference && abs(minValue - nums[i]) >= valueDifference) {
                return vector<int> {minIndex, i};
            }
            if (abs(maxIndex - i) >= indexDifference && abs(maxValue - nums[i]) >= valueDifference) {
                return vector<int> {maxIndex, i};
            }
        }
        
        return vector<int> {-1, -1};
    }
};
