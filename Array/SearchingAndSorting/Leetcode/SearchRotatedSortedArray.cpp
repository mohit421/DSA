//                                                      25 July, 2022


/*

We have  a sorted array in ascending order ,after gettting rotation for kth index we got an array 

And we have to solve that in O(logN) time complexity.



Below ,Implementated in O(LogN) using Binary Search
*/


// Code in C++

/*

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0,n = nums.size(), hi = n-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[lo]<=nums[mid]){
                if(nums[lo]<=target && nums[mid]>=target)
                    hi = mid-1;
                else
                    lo = mid + 1;
            }
            else{
                if(nums[mid]<target && nums[hi]>=target)
                    lo = mid + 1;
                else
                    hi = mid -1;
            }
        }
        return -1;
    }
};


*/




//                                      Discussion solution




/*

int search(int A[], int n, int target) {
        int lo=0,hi=n-1;
        // find the index of the smallest value using binary search.
        // Loop will terminate since mid < hi, and lo or hi will shrink by at least 1.
        // Proof by contradiction that mid < hi: if mid==hi, then lo==hi and loop would have been terminated.
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(A[mid]>A[hi]) lo=mid+1;
            else hi=mid;
        }
        // lo==hi is the index of the smallest value and also the number of places rotated.
        int rot=lo;
        lo=0;hi=n-1;
        // The usual binary search and accounting for rotation.
        while(lo<=hi){
            int mid=(lo+hi)/2;
            int realmid=(mid+rot)%n;
            if(A[realmid]==target)return realmid;
            if(A[realmid]<target)lo=mid+1;
            else hi=mid-1;
        }
        return -1;
    }


*/


/*


For those who struggled to figure out why it is realmid=(mid+rot)%n: you can think of it this way:
If we want to find realmid for array [4,5,6,7,0,1,2], you can shift the part before the rotating point to the end of the array (after 2) 
so that the sorted array is "recovered" from the rotating point but only longer, like this: [4, 5, 6, 7, 0, 1, 2, 4, 5, 6, 7]. 
The real mid in this longer array is the middle point between the rotating point and the last element: (rot + (hi+rot)) / 2. 
(hi + rot) is the index of the last element. And of course, this result is larger than the real middle. So you just need to wrap around 
and get the remainder: ((rot + (hi + rot)) / 2) % n. And this expression is effectively (rot + hi/2) % n, which is (rot+mid) % n.


- mid = hi/2;
- (rot + (hi+rot))/2 = rot/2 + hi/2 + rot/2 = rot + hi/2; 

Hope it helps!


*/