class Solution {
public:
    int reverse(int x) {
//         reverse integer
//         32 bit integer x
//         return x
//         digit shoulde be reversed
        int rev =0;
//         int rev =0;
        
        while (x!=0) {
            int pop = x % 10;
            x /= 10;
            // to check that it may not overflow integer range
//             we chrck the max
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            // we check the min 
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
};
