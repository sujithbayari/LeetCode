class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<=n; i++)
        {
            if(!count(nums.begin(), nums.end(), i))
                return i;
        }
        return -1;
    }
};