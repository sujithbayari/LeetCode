class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> seen;
        int k = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(seen.count(nums[i]) == 0) 
            {
                seen.insert(nums[i]);
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};