//                                              Date: 13 Aug, 2022




// Problem:   Plus One 


/*


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]==9){
                digits[i] = 0;
                
            }
            else{
                digits[i]++;
                return digits;
            }
        }
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
};

*/




// -----------------------------------------------------------------------------------

// source of solution->https://leetcode.com/problems/plus-one/discuss/24084/Is-it-a-simple-code(C%2B%2B)
//  solution from discussion ----> really learn from this --->solution by @StefanPochmann

/*

vector<int> plusOne(vector<int>& digits) {
    for (int i=digits.size(); i--; digits[i] = 0)
        if (digits[i]++ < 9)
            return digits;
    digits[0]++;
    digits.push_back(0);
    return digits;
}

*/