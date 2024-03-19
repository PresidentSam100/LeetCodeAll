class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int roundedAmount = round((double)(purchaseAmount) / 10) * 10;
        int newAccountBalance = 100 - roundedAmount;
        return newAccountBalance;
    }
};
