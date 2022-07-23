//                                  23 July, 2022

// Code in Cpp/C++


// Optimised Code using kadane's algorithm

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    if(n==0)
        return -1;
    long long  max_curr,max_glob;
    max_curr = max_glob = arr[0];
    for(long long i=1;i<n;i++){
        max_curr = max((long long)arr[i],max_curr+(long long)arr[i]);
        if(max_curr>max_glob)
            max_glob = max_curr;
    }
    if(max_glob<0)
        max_glob = 0; 
    return max_glob;
}