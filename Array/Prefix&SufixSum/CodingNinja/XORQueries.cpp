//                                                Date:- 2 Aug, 2022



// Can you solve it in O(1)  space 

// Problem:- XOR Queries


// Brute Force Approach

/*
Time Complexity: O(N^2) 
Space Complexity: O(N)

*/

/*

vector<int> xorQuery(vector<vector<int>> &queries)
{
	// Write your code here
    int r = queries.size();
    vector<int>ans;
    for(int i=0;i<r;i++){
         if(queries[i][0]==1)
              ans.push_back(queries[i][1]);
         else if(queries[i][0]==2){
             for(int j=0;j<ans.size();j++)
                 ans[j] = ans[j]^queries[i][1];
        }
    }
    return ans;
}


*/



// ----------------------------------------------------------------------------------------------------------------------------------------





// Optimize Approach:-    TC:- O(N)   & SC: O(N)



/*

1. First Calculate XOR of all if queries[i][0] = 2 else push it to ans
2. Then update ans by taking xor to all its element in ans
*/

/*

vector<int> xorQuery(vector<vector<int>> &queries)
{
	// Write your code here
    int r = queries.size();
    vector<int>ans;
    int Xor = 0;
    for(int i=0;i<r;i++){
         if(queries[i][0]==1)
              ans.push_back(queries[i][1]^Xor);
         else
             Xor ^= queries[i][1];
    }
    for(int i=0;i<ans.size();i++){
        ans[i] = Xor^ans[i];
    }
    return ans;
}


*/





