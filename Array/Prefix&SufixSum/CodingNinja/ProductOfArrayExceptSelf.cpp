//                                  Date:- 28 July, 2022


// Brute force approach


/*

#include<bits/stdc++.h>
int *getProductArrayExceptSelf(int *arr, int n)
{
    //Write your code here
    int* ans = new int[n];
    int i,j,prod;
    for(i=0;i<n;i++){
        for(j=0,prod = 1;j<n;j++){
            if(i!=j) prod *= (arr[j])%1000000007;
            else continue;
        }
        ans[i] = prod%1000000007;
    }
    return ans;
}
*/