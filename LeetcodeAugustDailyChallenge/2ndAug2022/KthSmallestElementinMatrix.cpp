//                                          Date: 2 Aug, 2022


// Kth smallest element in matrix




/*

TC: O(N^2)
SC: O(N^2)


- We have to optimize it to less than O(N^2)
*/


// Brute Force 
/*


class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>ans;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                ans.push_back(matrix[i][j]);
            }
        }
        int res = 0;
        sort(begin(ans),end(ans));
        for(int i=0;i<ans.size();i++){
            if(i==k-1){
                res = ans[i];
            }
        }
        return res;
    }
};


*/