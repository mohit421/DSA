//                                          Date:- 5 Aug, 2022



// Problem: Majority Element II





/*

TC: O(N)
SC: O(N)
*/

/*



#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
    int fVal = floor(n/3);
    int count = 0;
    sort(arr.begin(),arr.end());
    vector<int>vec;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
         mp[arr[i]]++;
    }
    for(auto it:mp){
        if(it.second > fVal)
            vec.push_back(it.first);
    }
    return vec;
}



*/



