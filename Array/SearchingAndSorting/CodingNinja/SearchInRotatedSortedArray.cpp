//                                                  25 July, 2022



// Time Complexity:- O(N)   and Space Complexity:- O(1)



// Code in C++

/*

int search(int* arr, int n, int key) {
    // Write your code here.
    //     Using Linear Searching
    int lo= 0, hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == key)
            return mid;
        if(arr[lo]<=arr[mid]){
            if(arr[lo]<=key && key<=arr[mid])
                hi = mid-1;
            else
                lo = mid + 1;
        }
        else{
            if(arr[mid]<key && arr[hi]>=key)
                lo = mid+1;
            else
                hi = mid - 1;
        }
    }
    return -1;
}

*/
