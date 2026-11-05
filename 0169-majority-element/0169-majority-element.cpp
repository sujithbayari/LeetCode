class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n, freq=0;
        for(int num : nums)
        {
            if(freq == 0)
            {
                n = num;
                freq++;
            }
            else
            {
                if(n == num)
                    freq++;
                else
                    freq--;
            }
        }
        return n;
    }
};