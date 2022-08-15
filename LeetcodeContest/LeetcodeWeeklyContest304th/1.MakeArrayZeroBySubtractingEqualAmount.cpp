//                                                      Sunday 31, July



// Problem:-  Make Array Zero by Subtracting Equal Amounts

/*

# I am unable to solve any of the question during this contest  that's my bad 
# after a long time i started to code

*/


// My approach 1  ---> only 55/95 test cases passed 
/*
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        if(nums[0]==0 && size(nums)==1)
            return 0;
        if(size(nums)==1 && nums[0] != 0)
            return 1;
        int x = 1,count = 0;
        for(int i=0;i<size(nums);i++){
            int mini = min_element(begin(nums),end(nums))- begin(nums);
            int maxi = max_element(begin(nums),end(nums)) - begin(nums);
            if(mini == 0 && maxi != 0)
                x = maxi;
            if(mini == 0)
                x = 0;
            if(mini>0)
                x = mini;
            if(nums[i]>=x){
                nums[i] = nums[i]-x;
                count++;
            }
        }
        return count;
    }
};

*/

//------------------------------------------------------------------------------


// My approach 2
//  Only 61/95 test cases passed
/*

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int count = 0;
        for(int i=0;i<size(nums);i++){
            if(nums[i]==0)
                continue;
            int mini = min_element(begin(nums),end(nums))- begin(nums);
            nums[i] = accumulate(begin(nums),end(nums),nums[i], minus<int>());
            count++;
        }
        return count;
    }
};

*/








//------------------------------------------------------------------------------------------------


//                                                               Solution






// Discussion Solution 0  --- > Brute force


/*


class Solution {
public:
    int minimumOperations(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());             // arrange the values in increasing order
        int operation=0;                           // for counting the total min operation
        
        int n=nums.size();
        for(int i=0;i<n;i++)                       // iterate over the array
        {
            if(nums[i]>0)                          // if value is greater than 0 only then go for substraction
            {
                int tmp = nums[i];                 // store curr value in tmp variable
                operation++;                       // increase the operation count for current operation

                for(int j=i;j<n;j++)               // check the remaining values and substract the curr value from those
                    nums[j] -= tmp;
            }
        }
        
        // final ans
        return operation;
    }
};

*/





//------------------------------------------------------------------------------------------------



// Discussion Solution 1

/*

/*

Explanation
Return the number of different positive elements.


Complexity
Time O(n)
Space O(n)


*/


/*

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int>st(begin(nums),end(nums));
        return size(st) - st.count(0);
    }
};

*/



//------------------------------------------------------------------------------------------------



// Discussion Solution 2

/*

We should try to think Indirectly what the question is actually saying
I know the brute force will work here but what if the size of array becomes 10^5. We should always try for optimized one.

In first operation, smallest will make all its equal values to 0.
In second operation, next smallest will make all its equal elements 0.
... so. on

We can observe a pattern here :
Number of unique elements == Number of Operations
[Take pen and paper and you will observe it too]
Like i already said its indirect visualization which i observed that actually the operations to make all 0 is also equal to count of unique elements.
Pen and Paper actually helped me today.

Time - O(N)
Space - O(N)

*/

/*

int minimumOperations(vector<int>& nums) {
    unordered_set<int> s;
    for(auto i:nums) if(i!=0) s.insert(i);
    return s.size();
}

*/

//------------------------------------------------------------------------------------------------



// Discussion Solution 3


/*

int minimumOperations(vector<int>& nums) {
return set<int>(begin(nums), end(nums)).size() - (count(begin(nums), end(nums), 0)>0);
}


*/

