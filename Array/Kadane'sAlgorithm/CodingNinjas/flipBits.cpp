


// Brute Force

/*

Brute force
The idea is to check for all the possible subarrays and inside each subarray, check for the highest value of the 
difference between the count for zeroes and ones for this. Let’s consider this highest difference to be MAX and 
initialize it to zero so formally MAX = count of zeroes in that subarray - count of ones in the same subarray.

 

Initialize TOTALONES to zero, which will store the total count of ones in the array.
Now by running two nested loops outer one starting from index I= 0 and the inner one starting from index I, and both 
running till the end of the array.
Inside the loop: if you encounter one, update  TOTALONES by incrementing one to it.
Initialize COUNT1 and COUNT0  to zero, which will store the count of 1 and 0, respectively.
Consider all subarrays starting from I and find the difference between 1s and 0s.
Update MAX on every iteration to store the answer.
Finally, return the count of all the ones in the array by the sum TOTALONES + MAX.
Time Complexity
O(N ^ 2), Where ‘N’ denotes the number of elements in the Array

 

Since we are using two nested loops.

Space Complexity
O(1)

 

We are using constant space.

*/


/*
    Time Complexity: O(N^2)
    Space complexity: O(1)
    
    Where N is the length of the array.
*/

/*

/*
    Time Complexity: O(N^2)
    Space complexity: O(1)
    
    Where N is the length of the array.
*/

/*

int flipBits(int* arr, int n) 
{
    int maxValue = 0;
    int totalOnes = 0;
    
    // Consider all SubArrays by using two nested two loops
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == 1) 
        {
            totalOnes++;
        }
        int count1 = 0, count0 = 0;
        for (int j = i; j < n; j++) 
        {
            if (arr[j] == 1) 
            {
                count1++;
            } 
            else 
            {
                count0++;
            }
            maxValue = max(maxValue, count0 - count1);
        }
    }
    int result = totalOnes + maxValue;
    return result;
}
*/



// -------------------------------------------------------------------------------


// Optimized Code in C++

/*

Kadane's algorithm
This problem can be interpreted as a version of Kadane's algorithm.

 

Actually, we want to consider a subarray that maximizes the difference between the count of ones and zeroes. 
If we change 1s to -1 and change 0 to 1, then the sum of values will give us the maximum difference between the 
counts(MAX). So, we have to find a subarray with the maximum sum, which can be done by Kadane’s Algorithm.  
Finally, we return the MAX plus count of ones in the original array.

 

Initialize MAX and CURRMAX to zero; these variables store overall max diff for any subarray and the current difference 
in the subarray respectively.
Initialize TOTALONES to zero, which will store the total count of ones in the array.
Now by running a loop from index I=0  check, Inside the loop: if you encounter one, update  TOTALONES by incrementing 
one to it.
And consider value if 1 as -1 and 0 ans as 1 i.e. VAL = (ARR[i] == 1)? -1 : 1;
Initialize COUNT1 and COUNT0  to zero, which will store the count of 1 and 0, respectively.
Update CURRMAX and MAX i.e. CURRMAX = Math.max(VAL, CURRMAX + VAL); and  MAX = Math.max(MAX, CURRMAX);
Finally, return the count of all the ones in the array by returning the TOTALONES + MAX.
Time Complexity
O(N), Where ‘N’ denotes the number of elements in the Array

 

Since we are traversing the array once.

Space Complexity
O(1)

 

We are using constant space.



*/



//  Optimized Code in C++


/*
    Time Complexity: O(N)
    Space complexity: O(1)
    
    Where N is the length of the array.
*/
/*

int flipBits(int* arr, int n) 
{
    int totalOnes = 0, maxVal = 0, currMax = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1)
            totalOnes++;
        int val = 0;
        if(arr[i]==1)
            val = -1;
        else
            val = 1;
        currMax = max(val,currMax+val);
        maxVal = max(currMax,maxVal);
    }
    maxVal = max(0,maxVal);
    int res = totalOnes + maxVal;
    return res;
}

*/