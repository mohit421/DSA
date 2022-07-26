//                                                  Date:- 24 July, 2022


// Using DCounting Sort :- TC: O(2N) - done in two pass and SC:- O(1)


/*

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0,count1=0,count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                count0++;
            if(nums[i]==1)
                count1++;
            if(nums[i]==2)
                count2++;
        }
        for(int i=0;i<count0;i++)
            nums[i] = 0;
        for(int i=count0;i<count1+count0;i++)
            nums[i] = 1;
        for(int i=count1+count0;i<nums.size();i++)
            nums[i] = 2;
        
    }
};

*/


// Using Dutch National Flag:- TC: O(N) - done in one pass and SC: O(1)




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

