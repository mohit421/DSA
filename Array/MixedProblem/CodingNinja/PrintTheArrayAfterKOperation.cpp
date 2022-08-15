//                                          Date: 7 Aug, 2022


// Print the Array after k operation



// Brute Force
/*
TC: O(N^2)
SC: O(1)
*/

/*

#include<bits/stdc++.h>
vector<int> printArrayAfterKOperations(vector<int> &Arr, int N, int K) {

	// Write your code here.
	long long j = 0;
    while(j<K){
        int maxi = max_element(Arr.begin(),Arr.end())-Arr.begin();
        int mx = Arr[maxi];
        for(int i=0;i<N;i++)
            Arr[i] = (mx - Arr[i]);
        j++;
    }
    return Arr;
}



*/





// -------------------------------------------------------------------------------------------------------------



// Optimized approach
/*

TC: O(N)
SC:O(N)
*/



/*
#include<bits/stdc++.h>
vector<int> printArrayAfterKOperations(vector<int> &Arr, int N, int K) {

	// Write your code here.
    if(K==0) return Arr;
    vector<int>maxArr;
    vector<int>minArr;
    int maxi = max_element(Arr.begin(),Arr.end())-Arr.begin();
    int mini = min_element(Arr.begin(),Arr.end())-Arr.begin();
    int mn = Arr[mini],mx = Arr[maxi];
    for(int i=0;i<N;i++)
        maxArr.push_back(mx- Arr[i]);
    for(int i=0;i<N;i++)
        minArr.push_back(Arr[i]-mn);
    if(K%2==1)
        return maxArr;
    return minArr;
}

*/