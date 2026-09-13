class Solution {
public:
    int addDigits(int num)
    {
        int sum = 0;
        int digit = num % 10;
        label1: 
        while(num>0)
        {
            digit = num % 10;
            sum += digit;
            num /= 10;
        }
        if(sum>9)
        {
            num = sum;
            sum = 0;
            goto label1;
        }
        return sum;
    }
};