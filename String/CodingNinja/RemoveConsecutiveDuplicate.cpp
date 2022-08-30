//                                                  Date: 13 Aug, 2022



// Problem: Remove Consecutive Duplicate



/*

TC: O(N)
SC:O(1)

*/
/*

#include <iostream>
#include <cstring>
#include<algorithm>
#define NO_OF_CHARS 256
using namespace std;

string removeConsecutiveDuplicates(string input)
{
    // Write your code here
    string s = input;
    int n = s.size();
    string str ;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]!=s[i+1])
            str += s[i];
    }
    str.push_back(s[n-1]);
    return str;
}

int main()
{
    string str;
    cin >> str;
    string ans = removeConsecutiveDuplicates(str);
    cout << ans << endl;
}


*/



// -------------------------------------------------------------------------------------------------------



/*


#include <iostream>
#include <cstring>
#include<algorithm>
#define NO_OF_CHARS 256
using namespace std;

string removeConsecutiveDuplicates(string input)
{
    // Write your code here
    string s = input;
    int n = s.size();
    string str ;
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[i+1])
            str += s[i];
    }
    return str;
}

int main()
{
    string str;
    cin >> str;
    string ans = removeConsecutiveDuplicates(str);
    cout << ans << endl;
}


*/





// ----------------------------------------------------------------------------------------------------



/*
#include <iostream>
#include <cstring>
#include<algorithm>
#define NO_OF_CHARS 256
using namespace std;

string removeConsecutiveDuplicates(string input)
{
    // Write your code here
    string s = input;
    int n = s.size();
    string str ;
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[i+1])
            str += s[i];
    }
    return str;
}

int main()
{
    string str;
    cin >> str;
    string ans = removeConsecutiveDuplicates(str);
    cout << ans << endl;
}

*/

