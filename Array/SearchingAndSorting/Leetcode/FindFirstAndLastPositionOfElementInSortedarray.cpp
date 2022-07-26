//                      26 July, 2022




// Time Complexity:- O(logN) and space complexity:- O(1)

class Solution {
public:

    vector<int> searchRange(vector<int>& nums, int target) {
        pair<int,int>pr;
        int n = nums.size();
        if(binary_search(nums.begin(),nums.end(),target) == false)
            return {-1,-1};
        pr.first = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        pr.second = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
        return {pr.first,pr.second-1};
    }
    
};