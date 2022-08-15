//                                                      Date: 4 Aug, 2022


// Problem:- Pair Sum

// Brute Force Approach


/*

Time Complexity: O(N^2)


*/

/*
#include <bits/stdc++.h> 

vector<vector<int>> pairSum(vector<int> &arr, int s){

   // Write your code here.

    sort(begin(arr),end(arr));
    vector<vector<int>>vec;
    vector<pair<int,int>>pr;
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==s)
                pr.push_back({arr[i],arr[j]});
        }
    }
    for(auto it:pr){
        vec.push_back({it.first,it.second});
    }
    return vec;
}
*/


