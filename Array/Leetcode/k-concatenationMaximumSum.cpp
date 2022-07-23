//                                                  23 July, 2022



// 39/42 test cases passed 

/*

class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        vector<int>nums;
        nums.reserve(arr.size()*k);
        nums.insert(nums.end(),arr.begin(),arr.end());
        
        long long array_sum = accumulate(arr.begin(),arr.end(),0);
        for(int i=0;i<k-1;i++){
            nums.insert(nums.end(),arr.begin(),arr.end());
        }
        long long  currMax = 0,globMax = 0;
        for(long long i=0;i<nums.size();i++){
            currMax = max((long long)nums[i], currMax + (long long)nums[i]);
            globMax = max(globMax, currMax);
        }
        return (max(0ll,globMax))%10000000007;
    }
};

*/

/*
Description:- Let's say we have a array of bigger size be 200000  and k is also bigger 90000, then after concatening it our array becomes 200000*90000
That a bit messay one so try to think different way 

*/


// Optimized solution

/*
Approach

Find the maximum subbaray sum m_sum for 2-concatenated array (note the special case when k == 1).
If the sum of the entire array is positive, add it k - 2 times.
Note that If the sum of the entire array is positive, m_sum will always span across two arrays

*/

/*

class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        int maxSum = 0,n = arr.size();
        for(int i=0,sum = 0;i<n*min(2,k);i++){
            sum = max(sum+arr[i%n],arr[i%n]);
            maxSum = max(maxSum,sum);
        }
        return ((long long)maxSum + 
                max(0ll,accumulate(begin(arr), end(arr), 0ll))*max(0,k-2))%1000000007;
    }
};

*/