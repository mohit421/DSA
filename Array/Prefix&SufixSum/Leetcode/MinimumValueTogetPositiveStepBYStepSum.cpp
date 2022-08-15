//                                                      Date:- 1 Aug, 2022





// Brute force approach -----> O(N^2)   & SC: O(N)

/*
int minStartValue(vector<int>& nums) {
        vector<int>prefix(size(nums));
        prefix[0] = nums[0];
        int mini = 1;
        for(int i=1;i<size(nums);i++){
            prefix[i] = prefix[i-1] + nums[i];
            mini = min(mini,prefix[i]);
        }
        mini = abs(min(mini,prefix[0]));
        for(int i=0;i<size(nums);i++){
            int startVal = mini + nums[0];
            if(startVal < 1){
                mini++;
                break;
            }
            for(int j=1;j<size(nums);j++){
                startVal +=  nums[j];
                if(startVal<1){
                    mini++;
                    break;
                }
            }
            startVal = 0;
        }
        return mini;
    }

*/




// ----------------------------------------------------------------------------------------------------------------------------------------------


//                                                      Discussion solution


// Optimise it to O(N) from O(N^2)  ----> Using prefix Sum

// TC:- O(N)    & SC: O(1)

/*
int minStartValue(vector<int>& nums) {
        int mini = 0,sum = 0;
        for(int c:nums){
            sum += c;
            mini = min(mini,sum);
        }
        return -mini + 1;          // return  1 - mini;
    }

*/



// Another way --- similar to above one but here, TC:- O(N)     and SC: O(N)


/*

    int minStartValue(vector<int>& nums) {
        vector<int>prefix(size(nums));
        if(nums[0])
        prefix[0] = nums[0];
        int mini = 0;
        for(int i=1;i<size(nums);i++){
            prefix[i] = prefix[i-1] + nums[i];
            mini = min(mini,prefix[i]);
        }
        mini = min(mini,prefix[0]);
        return -mini+1;
    }

*/


// ----------------------------------------------------------------------------------------------


// Same as above solution but using fancy built-in functions :)

// TC: O(N)  & SC: O(1)

/*
int minStartValue(vector<int>& A) {
        partial_sum(begin(A), end(A), begin(A));
        return -min(0, *min_element(begin(A), end(A))) + 1;
    }

*/