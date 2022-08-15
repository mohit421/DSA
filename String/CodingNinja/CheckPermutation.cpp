//                                      Date: 13 Aug, 2022



// Problem: Check Permutation


/*

TC: O(NlogN)
SC: O(1)

*/

/*

#include <bits/stdc++.h>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    string s1 = input1;
    string s2 = input2;
    if(s1.size()!= s2.size()) return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i])
            return false;
    }
    return true;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}




*/


// --------------------------------------------------------------------------------------------------------------------



/*

int count1[NO_OF_CHARS] = {0};
    int count2[NO_OF_CHARS] = {0};
    int i;
 
    // For each character in input strings,
    // increment count in the corresponding
    // count array
    for (i = 0; str1[i] && str2[i];  i++)
    {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }
 
    // If both strings are of different length.
    // Removing this condition will make the
    // program fail for strings like "aaca"
    // and "aca"
    if (str1[i] || str2[i])
      return false;
 
    // Compare count arrays
    for (i = 0; i < NO_OF_CHARS; i++)
        if (count1[i] != count2[i])
            return false;
 
    return true;



*/



// -----------------------------------------------------------------------------------------------------------

/*

TC: O(N)
SC: O(N)

*/



/*


#include <iostream>
#include <cstring>
#include<algorithm>
#define NO_OF_CHARS 256
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int count1[NO_OF_CHARS] = {0};
    int count2[NO_OF_CHARS] = {0};
    int i;
    for (i = 0; input1[i] && input2[i];  i++)
    {
        count1[input1[i]]++;
        count2[input2[i]]++;
    }
    if (input1[i] || input2[i])
      return false;
    for (i = 0; i < NO_OF_CHARS; i++)
        if (count1[i] != count2[i])
            return false;
    return true;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}


*/