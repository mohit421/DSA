//                                          Date:- 28July, 2022




// Brute Force Approach:- TC: O(N^2)


/*

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(size(nums));
        int i,j,prod;
        for(i=0;i<size(nums);i++){
            for(j=0,prod = 1;j<size(nums);j++){
                if(i!=j) prod *= (nums[j]);
                else continue;
            }
            ans[i] = prod;
        }
        return ans;
    }
};




*/



// Solution I:- Optimized 

// Using prefix and suffix :- TC: O(N)     &   SC: O(N)
//  Solution - I (Prefix & Suffix Products)




//                                                           CODE in C++
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(size(nums),1);
        vector<int>prefix(n),suffix(n);
        prefix[0] = 1;
        for(int i=1;i<n;i++)
            prefix[i] = prefix[i-1]*nums[i-1];
        suffix[n-1] = 1;
        for(int i=n-2;i>=0;i--){
            suffix[i] = suffix[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i] = prefix[i]*suffix[i];
        }
        return ans;
    }
};





//                                          From Discussion of leetcode 


// Similary above but using some STL function-->  Solution - I (Prefix & Suffix Products)


/*

Some Description

- We are required to solve this problem without using the division operator. We can do this by calculating two arrays pre and suf where pre[i] 
contains product of all nums[j] such that j <= i, and suf[i] contains product of all nums[j] such that j >= i.

- Finally, the resulting array ans can be calculated as ans[i] = pre[i-1] * suf[i+1] which is product of all elements with index less than i 
multiplied by product of all elements with index greater than i. This is essentially equal to product of array except self at each index.

*/
// Solution - II (Prefix & Suffix Products)

//                                                           CODE in C++

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums), suf(nums), ans(size(nums));
        partial_sum(begin(pre), end(pre), begin(pre), multiplies<int>());       // calculates & stores prefix product at each index
        partial_sum(rbegin(suf), rend(suf), rbegin(suf), multiplies<int>());    // calculates & stores suffix product at each index
        for(int i = 0; i < size(nums); i++)
            ans[i] = (i ? pre[i-1] : 1) * (i+1 < size(nums) ? suf[i+1] : 1);
        return ans;
    }
};





/*



Solution - III (Space-Optimized Prefix & Suffix Products) ----> TC:- O(N)   &  SC: O(1)

We can calculate ans without maintaining two extra pre and suf arrays.

We can initialize the result array ans of length equal to nums filled with 1.
Then, for each i, we can calculate prefix product (without self), i.e, ans[i] = ans[i-1]*nums[i-1]. This is same as calculating pre in previous 
approach but this time we are storing it within our result array.
Then we iterate from the last index with a variable suffixProd=1 denoting suffix product. For each i, we multiply ans[i] with suffixProd. Each time 
we will also update suffixProd = suffixProd * nums[i].
The above again gives us product of array except self at each index. This is because, firstly we are storing prefix product (without self) in ans and 
then multiplying each ans[i] with suffix product which is the same that we did in the previous approach.


*/



//                                                           CODE in C++


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(size(nums),1);
        for(int i = 1; i < size(nums); i++)                            // store prefix product
			ans[i] = ans[i-1] * nums[i-1];
        for(int i = size(nums)-1, suffixProd = 1; i >= 0; i--) {
            ans[i] *= suffixProd;                                      // multiply stored prefix product with suffix product
            suffixProd *= nums[i];                                     // update suffix product
        }
        return ans;
    }
};




// Solution - IV (Space-Optimized Prefix & Suffix Products in One-Pass) ----> TC:- O(N)   &  SC: O(1)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(size(nums),1);
        for(int i = 0, suf = 1, pre = 1, n = size(nums); i < n; i++) {
            ans[i] *= pre;             // similar to prefix product being calculated in 1st loop of previous solution
            pre *= nums[i];			
            ans[n-1-i] *= suf;         // similar to suffix product being calculated in 2nd loop of previous solution
            suf *= nums[n-1-i];
        }
        return ans;
    }
};
