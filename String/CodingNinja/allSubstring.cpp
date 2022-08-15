//                                              Date:- 10 Aug, 2022



// Brute force

/*

TC: O(N^3)
SC: O(1)


*/

/*

#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string input) {
    //Write your code here
    for(int i=0;i<input.size();i++){
        for(int j=1;j<=input.size()-i;j++)
            cout<<input.substr(i,j) <<endl;
    }
}

int main() {
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}

*/


// ------------------------------------------------------------------------------------

/*

TC: O(N^3)
SC:O(1)

*/
/*

void subString(char str[], int n)
{
    // Pick starting point
    for (int len = 1; len <= n; len++)
    {   
        // Pick ending point
        for (int i = 0; i <= n - len; i++)
        {
            //  Print characters from current
            // starting point to current ending
            // point. 
            int j = i + len - 1;           
            for (int k = i; k <= j; k++)
                cout << str[k];
             
            cout << endl;
        }
    }
}

*/

// ----------------------------------------------------------------------

/*
TC: O(N^3)
SC: O(1)


*/

/*


void printSubstrings(string input) {
    //Write your code here
    for(int i=0;i<input.size();i++){
        for(int j=i;j<input.size();j++){
            for(int k=i;k<=j;k++){
                cout<<input[k];
            }
            cout<<endl;
        }
    }
}


*/



// Optimised approach:  TC: O(N^2)    and SC: O(N)



/*


void printSubstrings(string input) {
    //Write your code here
    for(int i=0;i<input.size();i++){
        string substr;
        for(int j=i;j<input.size();j++){
            substr += input[j];
            cout<<substr<<endl;
        }
    }
}


*/