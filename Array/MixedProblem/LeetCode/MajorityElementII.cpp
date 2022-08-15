//                                              Date:- 5Aug, 2022


// Problem:- Majority Element II



// Using Hash Table --> unordered_map
/*

TC: O(N)
SC: O(N)
*/

/*

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = size(nums);
        int cnt = 0;
        int fVal = floor(n/3);
        vector<int>vec;
        unordered_map<int,int>mp;
        for(int i = 0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second>fVal)
                vec.push_back(it.first);
        }
        return vec;
    }
};

*/






// More Optimized solution isusing  Boyer Moore voting algorithm


/*

TC: O(N)
SC: O(k)
*/

/*

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int fVal = floor(size(nums)/3);
        int num1 = -1,num2= -1,count1 = 0,count2 = 0,i;
        for(int &it:nums){
            if(it==num1) count1++;
            else if(it == num2) count2++;
            else if(count1 == 0){
                num1 = it;
                count1 = 1;
            }
            else if(count2 == 0){
                num2 = it;
                count2 = 1;
            }
            else{
                count1--;count2--;
            }
        }
        count1 = 0;
        count2 = 0;
       vector<int>ans;
        for(int i=0;i<size(nums);i++){
            if(num1==nums[i]) count1++;
            else if(num2==nums[i]) count2++;
        }
        if(count1>fVal)
            ans.push_back(num1);
        if(count2>fVal)
            ans.push_back(num2);
        return ans;
        
    }
};


*/