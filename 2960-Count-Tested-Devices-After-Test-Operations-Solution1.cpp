class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int testedDevices = 0;
        int decrementAmount = 0;
        for (int i = 0; i < batteryPercentages.size(); i++) {
            if (batteryPercentages[i] - decrementAmount > 0) {
                testedDevices++;
                decrementAmount++;
            }
        }
        return testedDevices;
    }
};
