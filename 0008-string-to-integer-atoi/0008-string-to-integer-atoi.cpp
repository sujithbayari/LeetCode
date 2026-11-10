class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1;
        long long num = 0;

        // Skip leading spaces
        while (i < s.size() && s[i] == ' ')
            i++;

        // Check sign
        if (s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (s[i] == '+') {
            i++;
        }

        // Convert digits
        while (i < s.size() && isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');

            // Check overflow
            if (num > INT_MAX) {
                if (sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }

            i++;
        }

        return num * sign;
    }
};