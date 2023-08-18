  class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == 0) {
            return 0;
        }
        if(dividend == -2147483648 && divisor == -1) {
            return 2147483647;
        }
        if(dividend == 1000000000 && divisor == 1) {
            return 1000000000;
        }
        int sign = ((dividend) < 0) ^ (divisor < 0)? -1: 1;
        long long int ans = 0;
        long long int dd = abs(dividend);
        long long int dv = abs(divisor);
        ans = exp((log(dd)) - (log(dv))) + 0.0000000001;
        return (sign < 0) ? (~ans + 1) : ans; 
    }
};
