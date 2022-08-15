//                                  Date: 7 Aug, 2022



// Only one question is able to solve in this contest 

/*

Brute force  Approach
TC: O(N^3)
SC: O(1)
*/

/*
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0;
        for(int i=0;i<size(nums)-2;i++){
            for(int j=i+1;j<size(nums)-1;j++){
                for(int k=j+1;k<size(nums);k++){
                    if(nums[j]-nums[i]==diff && nums[k]-nums[j] ==diff)
                        count++;
                }
            }
        }
        return count;
    }
};


*/



// ---------------------------------------------------------------------------------------------------


// using Hash table :- unordered_map or map

/*
TC:O(N)
SC:O(N)

*/



/*
int arithmeticTriplets(vector<int>& nums, int diff) 
    {
       map<int,int> m;
        for(auto x:nums)
             m[x]++;
        
        int ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
             if((m[nums[i]+diff]) and (m[nums[i]+2*diff]))
                  ans++;
        }
        
        return ans;
    }

*/







// ---------------------------------------------------------------------------------------------------

/*

TC:O(N)
SC:O(N)
*/


// Using unordered_set


/*

int arithmeticTriplets(vector<int>& nums, int diff) {
        int ans = 0; 
        unordered_set<int> seen; 
        for (auto& x : nums) {
            if (seen.count(x-diff) && seen.count(x-2*diff)) ++ans; 
            seen.insert(x); 
        }
        return ans; 
    }

*/