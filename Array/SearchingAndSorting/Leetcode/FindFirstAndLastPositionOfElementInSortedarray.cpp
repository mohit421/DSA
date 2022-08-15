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




// Code with implementation of lower bound and upper bound STL function

/*

class Solution {
public:
    int lowerBound(vector<int>& nums,int n, int key){
        int lo = 0,hi = n-1,ans = -1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]== key){
                ans = mid;
                hi = mid -1;
            }
            else if(key>nums[mid])
                lo = mid +1;
            else
                hi = mid -1;
        }
        return ans;
    }
    int upperBound(vector<int>& nums,int n, int key){
        int lo = 0,hi = n-1,ans = -1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]== key){
                ans = mid;
                lo = mid +1;
            }
            else if(key<nums[mid])
                hi = mid -1;
            else
                lo = mid +1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        pair<int,int>pr;
        int n = nums.size();
        if(binary_search(nums.begin(),nums.end(),target) == false)
            return {-1,-1};
        pr.first = lowerBound(nums,n,target);
        pr.second = upperBound(nums,n,target);
        return {pr.first,pr.second};
    }
    
};


*/