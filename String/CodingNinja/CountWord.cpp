//                                         Date:- 10 Aug, 2022




// ----------------------------------------------------------------------------------


// Problemm:- Count Word

/*

#include <iostream>
#include <cstring>
using namespace std;

int countWords(string input) {
    // Write your code here
    int count = 0;
    for(int i=0;i<input.size();i++){
        if(input[i]==' ')
            count++;
    }
    return count+1;
}

int main() {
    string input;
    getline(cin, input);
    int output = countWords(input);
    cout << output << endl;
    return 0;
}

*/





// -------------------------------------------------------------------------------------------------


// USing stringstream


/*


#include <bits/stdc++.h>
using namespace std;

int countWords(string input) {
    // Write your code here
    stringstream iss(input);
    return distance(istream_iterator<string>(iss), istream_iterator<string>());
}

int main() {
    string input;
    getline(cin, input);
    int output = countWords(input);
    cout << output << endl;
    return 0;
}

*/


// ---------------------------------------------------------------------------------------------


/*


#include <bits/stdc++.h>
using namespace std;

int countWords(string input) {
    // Write your code here
    stringstream ss(input);
    int cnt = 0;
    string words;
    while(ss>>words){
        cnt++;
    }
    return cnt;
}

int main() {
    string input;
    getline(cin, input);
    int output = countWords(input);
    cout << output << endl;
    return 0;
}


*/


//------------------------------------------------------------------------------------------------------------


/*


#include <bits/stdc++.h>
using namespace std;

int countWords(string input) {
    // Write your code here
    return count(input.cbegin(),input.cend(),' ')+1;
}

int main() {
    string input;
    getline(cin, input);
    int output = countWords(input);
    cout << output << endl;
    return 0;
}

*/