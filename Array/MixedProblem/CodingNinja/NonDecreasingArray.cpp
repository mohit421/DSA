//                                          Date: 7 Aug, 2022


// 




// Problem :- Non decreasing array


/*
TC: O(N)
SC: O(1)

*/


/*
bool isPossible(int *arr, int n)
{
    //  Write your code here.
    int count = 0,idx;
    bool found = false;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            count++;
            if(i>0 && arr[i-1]>arr[i+1]){
                arr[i+1] = arr[i];
            }
        }
    }
    if(count<=1)
        return true;
    return false;
}

*/