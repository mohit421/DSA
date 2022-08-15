//                                              Date: 4 Aug, 2022



// Problem:- Valid Pair

/*

Brute Force 

TC:- O(N^2)
SC:- O(1)


/*
#include<bits/stdc++.h>
bool isValidPair(vector<int> &arr, int n, int k, int m)
{
    // Write your code here.
    if(n%2==1)
        return false;
    for(int i = 0;i<n;i++){
        if(arr[i]==-1)
            continue;
        for(int j = i+1;j<n;j++){
            if(arr[j]==-1)
                continue;
            if((arr[i]+arr[j])%k==m){
                arr[i] = -1;
                arr[j] = -1;
                break;
            }
            
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!= -1)
            return false;
    }
    return true;
}

*/




//  -----------------------------------------------------------------------------------------



// Optimize approach using hashmap --> unordered_map


/*
#include<bits/stdc++.h>
bool isValidPair(vector<int> &arr, int n, int k, int m)
{
    // Write your code here.
    if(n%2==1)
        return false;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]%k]++;
    }
    for(auto it= mpp.begin();it!=mpp.end();it++){
        int f1 = it->first;
        int x = (m-f1%k+k)%k;
        if(mpp[f1]!=mpp[x])
            return false;
    }
    return true;
}

*/