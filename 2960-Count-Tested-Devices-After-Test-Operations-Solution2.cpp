class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int testedDevices = 0;
        for (int batteryPercent : batteryPercentages) {
            if (batteryPercent - testedDevices > 0) {
                testedDevices++;
            }
        }
        return testedDevices;
    }
};
