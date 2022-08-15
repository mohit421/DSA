//                                              Date:- 30 July, 2022


//Problem:- 1991. Find the Middle Index in Array 


// Time Complexity:- O(NlogN)   & Space Complexity:- O(1)


/*
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int lSum = 0, rSum = 0;
        int middleIdx = 0;
        for(middleIdx=0;middleIdx<size(nums);middleIdx++){
           if(middleIdx == 0){
               lSum = 0;
               rSum = accumulate(begin(nums)+1,end(nums),0);
               if(lSum == rSum)
                   break;
           }
            if(middleIdx>0 && middleIdx<size(nums)){
                lSum = accumulate(begin(nums),begin(nums)+middleIdx,0);
                rSum = accumulate(begin(nums) + middleIdx + 1, end(nums),0);
                if(lSum == rSum)
                   break;
            }
            if(middleIdx == size(nums)){
                lSum = accumulate(begin(nums),begin(nums)+middleIdx,0);
                rSum = 0;
                if(lSum == rSum)
                   break;
            }
        }
        if(lSum == rSum)
            return middleIdx;
        return -1;
    }
};

*/



//------------------------------------------------------------------------------------------------------------------------------------


// Using Prefix and Suffix Sum  --> Time Complexity:- O(N)   and  Space complexity:- O(N)


/*

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = size(nums);
        // lSum maintain the prefixSum of nums
        vector<int>lSum(n);
        // rSum maintain the suffixSum of nums
        vector<int>rSum(n);
        
        // for calculating prefix sum
        lSum[0] = nums[0];
        for(int i=1;i<n;i++){
            lSum[i] = lSum[i-1] + nums[i];
        }
        // for calculating suffix sum
        rSum[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            rSum[i] = rSum[i+1] + nums[i];
        }
        // return the index where prefix sum is equal to suffix sum else return -1
        for(int i=0;i<n;i++){
            if(lSum[i] == rSum[i])
                return i;
        }
        return -1;
    }
};


*/




// -------------------------------------------------------------------------------------------------------




// (Using O(1) space)) and TC: O(N)


/*
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int totalSum = accumulate(begin(nums), end(nums), 0);
        
        int leftSum  = 0;
        
        for(int i = 0; i<nums.size(); i++) {
            totalSum -= nums[i];
            
            if(leftSum == totalSum)
                return i;
            
            leftSum += nums[i];
        }
        return -1;
    }
};


*/



// -------------------------------------------------------------------------------------------------------

// TC:- O(N)  & SC: O(N)

/*
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
    int totalSum = accumulate(begin(nums), end(nums), 0);
    for (int i = 0, lsum = 0; i < nums.size(); lsum += nums[i++])
        if (lsum * 2 == totalSum - nums[i])
            return i;
    return -1;
    }
};


*/




// -------------------------------------------------------------------------------------------------------

/*


class Solution 
{
public:
    int findMiddleIndex(vector<int>& nums) 
    {
    int postfixsum=accumulate(nums.begin(),nums.end(),0); // calculate the sum of the array  
    int prefixsum=0; // initially the prefix sum is =0;
    for(int i=0;i<nums.size();i++)
    {
        postfixsum-=nums[i];//lets the mid element contender be i , subtract it from sum as it should neither be in prefixsum nor in postfixsum.
        if(postfixsum==prefixsum)//check if prefixsum ==postfix sum  if yes return true.
            return i;
        prefixsum+=nums[i];//add the element int orpefix sum since the previous condition was false and this element is no longer the contender of middle index.
    }
        return -1;//if the above condition in the loop was false this pretty much concludes that we have no middle element in our array.
    }
};


*/