//                                                      Date:- 30 July, 2022



// Problem:- 724. Find Pivot Index


// Similar to find Middle index array



/*
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = size(nums);
        vector<int>lSum(n);
        vector<int>rSum(n);
        lSum[0] = nums[0];
        for(int i=1;i<n;i++){
            lSum[i] = lSum[i-1] + nums[i];
        }
        rSum[n-1]= nums[n-1];
        for(int i=n-2;i>=0;i--){
            rSum[i] = rSum[i+1] + nums[i];
        }
        for(int i=0;i<n;i++){
            if(lSum[i]==rSum[i])
                return i;
        }
        return -1;
    }
};


*/




// -------------------------------------------------------------------------------------------



/*

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for(int num:nums){
            totalSum += num;
        }
        int sum = 0;
        for(int i =0;i<size(nums);sum += nums[i++]){
            if(sum*2 == totalSum - nums[i])
                return i;
        }
        return -1;
    }
};


*/



// ---------------------------------------------------------------------------------------------------------


/*

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for(int num:nums){
            totalSum += num;
        }
        int sum = 0;
        for(int i =0;i<size(nums);sum += nums[i++]){
            if(sum*2 == totalSum - nums[i])
                return i;
        }
        return -1;
    }
};

*/