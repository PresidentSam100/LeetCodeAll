class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prodLeft = 1;
        int prodRight = 1;
        int bestProd = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            prodLeft *= nums[i];
            prodRight *= nums[nums.size() - i - 1];
            bestProd = max({bestProd, prodLeft, prodRight});
            if (prodLeft == 0) {
                prodLeft = 1;
            }
            if (prodRight == 0) {
                prodRight = 1;
            }
        }
        return bestProd;
    }
};
