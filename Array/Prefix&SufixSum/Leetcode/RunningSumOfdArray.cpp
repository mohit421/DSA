//                                              30 July, 2022


// Running sum of 1D array    


// Method 1  ---> Using PrefixSum   ------>       TC:- O(N) , SC:- O(N)

/*

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>prefixSum;
        prefixSum.push_back(nums[0]);
        for(int i=1;i<size(nums);i++){
            prefixSum.push_back(nums[i]+prefixSum[i-1]);
        }
        return prefixSum;
    }
};


*/



// Method 2:-            Prefix Sum  ----> O(N), SC:- O(1)


/*

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<size(nums);i++){
            nums[i] += nums[i-1];
        }
        return nums;
    }
};


*/




// Using STL function    ------>   O(N)  and SC:- O(1)

/*

vector<int> runningSum(vector<int>& nums) {
    partial_sum(begin(nums), end(nums), begin(nums));
    return nums;
}

*/



