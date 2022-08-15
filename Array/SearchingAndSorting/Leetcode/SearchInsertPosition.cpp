//                          Date:- 26 July, 2022


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return (lower_bound(nums.begin(),nums.end(),target) - nums.begin());
    }
};