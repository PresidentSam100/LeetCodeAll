/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long lo = 1;
        long hi = n;
        while (lo <= hi) {
            long mid = (lo + hi) / 2;
            long pick = guess(mid);
            if (pick == -1) {
                hi = mid - 1;
            } else if (pick == 1) {
                lo = mid + 1;
            } else if (pick == 0) {
                return mid;
            }
        }
        return -1;
    }
};
