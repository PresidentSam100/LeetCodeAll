class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int roundAdd = ((purchaseAmount % 10 >= 5) ? (10 - purchaseAmount % 10) : (-purchaseAmount % 10));
        int newPurchaseAmount = purchaseAmount + roundAdd;
        int newAccountBalance = 100 - newPurchaseAmount;
        return newAccountBalance;
    }
};
