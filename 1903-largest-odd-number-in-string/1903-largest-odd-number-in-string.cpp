
class Solution {
public:
    string largestOddNumber(string num) {
        int ptr = num.size() - 1;

        while (ptr >= 0) 
        {
            if ((num[ptr] - '0') % 2 != 0)
            {
                return num.substr(0, ptr + 1);
            }
            ptr--;
        }
        return "";
    }
};
