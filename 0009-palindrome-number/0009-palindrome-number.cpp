class Solution {
public:
    bool isPalindrome(int x) {
        long int rev=0, temp=x, d;
        while(temp > 0)
        {
            d = temp%10;
            temp = temp/10;
            rev = rev*10 + d;
        }
        if(rev == x)
            return true;
        return false;
    }
};