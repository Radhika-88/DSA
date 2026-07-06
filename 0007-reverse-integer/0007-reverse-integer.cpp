class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        int maxVal = INT_MAX;
        int minVal = INT_MIN;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            if (rev > maxVal / 10 || (rev == maxVal / 10 && digit > 7))
                return 0;

            if (rev < minVal / 10 || (rev == minVal / 10 && digit < -8))
                return 0;

            rev = rev * 10 + digit;
        }

        return rev;
    }
};