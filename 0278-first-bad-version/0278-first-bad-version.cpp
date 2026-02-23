class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;
        while(low < high) {
            int mid = low + (high - low) / 2;
            if(isBadVersion(mid))
                high = mid;        // mid possible answer
            else
                low = mid + 1;     // mid definitely good
        }
        return low;
    }
};