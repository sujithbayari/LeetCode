class Solution {
public:
    int reverse(int x) {
        long int rev = 0;
        int temp = x;

        while (temp != 0) 
        {
            int digit = temp % 10;
            temp /= 10;
            rev = rev * 10 + digit;
            if (rev > INT_MAX || rev < INT_MIN)
                return 0;
        }
        return rev;
    }
};