class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int metTarget = 0;
        for (int hour : hours) {
            if (hour >= target) {
                metTarget++;
            }
        }
        return metTarget;
    }
};
