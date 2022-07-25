//                                              Date: 24 July, 2022


// 

/*

long long kadaneAlgo(vector<int>&arr,int n, int k){
    long long currSum = arr[0],maxSum = arr[0];
    int x = k==1?n:n/2;
    for(int i=1;i<n;i++){
        currSum = currSum>=0?(currSum+arr[i%x]):arr[i%x];
        maxSum = max(maxSum,currSum);
    }
    return maxSum;
}
long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{
	// Write your code here.
   long long total_sum = 0;
    for(int i=0;i<n;i++)
        total_sum += arr[i];
    if(k==1)
        return kadaneAlgo(arr,n,k);
    else if(total_sum<0)
        return kadaneAlgo(arr,n*2,k);
    else
        return (kadaneAlgo(arr,n*2,k)+((k-2)*total_sum));
}


*/