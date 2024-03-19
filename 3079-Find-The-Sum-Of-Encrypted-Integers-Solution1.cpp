class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int encryptedSum = 0;
        for (int num : nums) {
            int encryptedNum = encrypt(num);
            encryptedSum = encryptedSum + encryptedNum;
        }
        return encryptedSum;
    }

    int encrypt(int x) {
        int largestDigit = 0;
        int length = 0;
        while (x > 0) {
            int digit = x % 10;
            x = x / 10;
            length = length + 1;
            largestDigit = max(largestDigit, digit);
        }
        int encryptedNumber = 0;
        while (length > 0) {
            length = length - 1;
            encryptedNumber = encryptedNumber * 10;
            encryptedNumber = encryptedNumber + largestDigit;
        }
        return encryptedNumber;
    }
};
