class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int metTarget = 0;
        for (int hourIndex = 0; hourIndex < hours.size(); hourIndex++) {
            if (hours[hourIndex] >= target) {
                metTarget++;
            }
        }
        return metTarget;
    }
};
