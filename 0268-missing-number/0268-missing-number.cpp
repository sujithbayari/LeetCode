class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int rsum = (n*(n+1)) /2, sum=0;
        for( int num : nums)
            sum += num;
        return rsum-sum;
    }
};