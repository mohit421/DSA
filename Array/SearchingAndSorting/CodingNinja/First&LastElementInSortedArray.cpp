//                                                  26 July, 2022




// Code in C++

/*

binary_search(first iterator,last iterator, element to be search)   ---> Time complexity:- O(logn)
lower_bound(first iterator,last iterator, element to be search)     ---> Time complexity:- O(logn)
upper_bound(first iterator,last iterator, element to be search)     ---> Time complexity:- O(logn)

So overall time complexity of below code is:- O(logN*logN)
/*

#include<bits/stdc++.h>
pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
	// Write your code here.
    if(binary_search(arr.begin(),arr.end(),x)==true){
        int firstIdx = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        int lastIdx = upper_bound(arr.begin(),arr.end(),x)-arr.begin();
        return {firstIdx,lastIdx-1};
    }
    return {-1,-1};
}



*/


// Optimized Code 


// Time complexity:- O(logN ) + O(logN) = O(logN)



/*

#include<bits/stdc++.h>
int firstOccur(vector<int>&arr, int n, int x){
    int lo = 0,hi = n-1,ans = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            ans = mid;
            hi = mid-1;
        }
        else if(x<arr[mid]){
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    return ans;
}
int lastOccur(vector<int>&arr, int n, int x){
    int lo = 0,hi = n-1,ans = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            ans = mid;
            lo = mid+1;
        }
        if(x<arr[mid])
            hi = mid-1;
        else
            lo = mid+1;
    }
    return ans;
}
pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
	// Write your code here.
    pair<int,int>pr;
    pr.first = firstOccur(arr,n,x);
    pr.second = lastOccur(arr,n,x);
    return pr;
}



*/