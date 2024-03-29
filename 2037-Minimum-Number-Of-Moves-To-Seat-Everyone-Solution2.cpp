class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        map<int, int> seatsMap;
        map<int, int> studentsMap;
        int ans = 0;
        for (int seat : seats) {
            seatsMap[seat]++;
        }
        for (int student : students) {
            studentsMap[student]++;
        }
        auto seatsIter = seatsMap.begin();
        auto studentsIter = studentsMap.begin();
        while (seatsIter != seatsMap.end()) {
            ans += abs(seatsIter->first - studentsIter->first);
            if (seatsIter->second > 1) {
                seatsIter->second--;
            } else {
                seatsIter++;
            }
            if (studentsIter->second > 1) {
                studentsIter->second--;
            } else {
                studentsIter++;
            }
        }
        return ans;
    }
};
