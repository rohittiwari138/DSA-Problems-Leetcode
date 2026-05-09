class Solution {
public:
    int divide(int dividend, int divisor) {
         if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;
         double ans = dividend/divisor;
        return ans;
    }
};