//                                          24 july, 2022

/*
This problem take O(NlogN) using quick and merge sort but we can reduce it to O(N)
by using Counting sort.


 =Solve using counting sort ; 
Time complexity:- O(N) + O(N) = O(2N)   (two passes) 

Then interviewer might ask to solve it in one pass :- Solution is Dutch National Flag algorithm


*/

// Using Counting sort  , TC:- O(2N) - two passes use 

/*

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
        int count0=0,count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0)
                count0++;
            if(arr[i]==1)
                count1++;
            if(arr[i]==2)
                count2++;
        }
        for(int i=0;i<count0;i++)
            arr[i] = 0;
        for(int i=count0;i<count1+count0;i++)
            arr[i] = 1;
        for(int i=count1+count0;i<n;i++)
            arr[i] = 2;
}


*/



// Using Dutch National Flag :- TC: O(N) - In  single pass and 
// SC:- O(1)

/*

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0, high = n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid++],nums[low++]);
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high--]);
            }
        }
    }
};

*/