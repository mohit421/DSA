//                                          Date:- 23 July, 2022


// Code in C++/Cpp


// Optimized Code using Kadane's Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int max_curr,max_glob;
        max_curr = max_glob =  nums[0];
        for(int i=1;i<nums.size();i++){
            max_curr = max(nums[i],max_curr+nums[i]);
            if(max_curr>max_glob)
                max_glob = max_curr;
        }
        return max_glob;
    }
};