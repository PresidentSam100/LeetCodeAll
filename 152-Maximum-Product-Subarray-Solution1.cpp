class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currProd = 1;
        int bestProd = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            currProd *= nums[i];
            if (currProd > bestProd) {
                bestProd = currProd;
            }
            if (currProd == 0) {
                currProd = 1;
            }
        }
        currProd = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            currProd *= nums[i];
            if (currProd > bestProd) {
                bestProd = currProd;
            }
            if (currProd == 0) {
                currProd = 1;
            }
        }
        return bestProd;
    }
};
