//                                                      Date:- 2 Aug, 2022


// Problem:- 974. Subarray Sums Divisible by K




//  Brute Force approach----> It will give TLE for big test cases due to constraints  we can optimize it using prefix Sum


/*

TC: O(N^2)
SC: O(1)
*/



/*
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count =0;
        if(size(nums)==1)
            if(abs(nums[0]) != k)
                return 0;
        for(int i=0;i<size(nums);i++){
            for(int j=i,sum=0;j<size(nums);j++){
                sum += nums[j];
                if(sum%k==0)
                    count++;
            }
        }
        return count;
    }
};

*/







