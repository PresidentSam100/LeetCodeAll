class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int encryptedSum = 0;
        for (int num : nums) {
            int encryptedNum = encrypt(num);
            encryptedSum += encryptedNum;
        }
        return encryptedSum;
    }

    int encrypt(int x) {
        int largestDigit = 0;
        int length = 0;
        while (x > 0) {
            int digit = x % 10;
            x /= 10;
            length++;
            largestDigit = max(largestDigit, digit);
        }
        string encryptedNumber = "";
        while (length > 0) {
            length--;
            encryptedNumber += "" + to_string(largestDigit);
        }
        return stoi(encryptedNumber);
    }
};
