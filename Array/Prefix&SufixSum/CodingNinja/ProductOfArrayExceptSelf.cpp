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

// ---------------------------------------------------------------------------------------------

// Optimize approach 
/*
1st calc prefix product and update it to prefix arr
2nd calc suffix product and update it to suffix arr
then update ans by  calc every element ith index of suffix and prefix

/*


#include<bits/stdc++.h>
int *getProductArrayExceptSelf(int *arr, int n)
{
    //Write your code here
    int pre[n];
    int suf[n];
    int *ans = new int[n];
    pre[0] = 1;
    for(int i=1;i<n;i++){
        pre[i] = pre[i-1]*arr[i-1];
    }
    suf[n-1] = 1;
    for(int i=n-2;i>=0;i--){
        suf[i] = suf[i+1]*arr[i+1];
    }
    for(int i=0;i<n;i++){
        ans[i] = suf[i]*pre[i];
    }
    return ans;
}


*/