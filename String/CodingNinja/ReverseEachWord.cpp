//                                  Date: 15 Aug, 2022



/*

TC: O(N)
SC:O(N)
*/





/*


#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
#include<bits/stdc++.h>
string reverseEachWord(string input)
{
    // Write your code here
    vector<string>words;
    string word;
    string str;
    for(int i=0;i<input.size();i++){
        if(input[i]==' '){
            reverse(word.begin(),word.end());
            words.push_back(word);
            word = "";
        }
        else{
            word.push_back(input[i]);
        }
    }
    reverse(word.begin(),word.end());
    words.push_back(word);
    for(int i=0;i<words.size();i++){
        str.append(words[i]);
        str.push_back(' ');
    }
    return str;
}

int main()
{
    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
}

*/





// ------------------------------------------------------------------------------------------------------------




/*

TC: O(N)
SC: O(N)

*/

// Using stream stream

/*

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
#include<bits/stdc++.h>
string reverseEachWord(string input)
{
    // Write your code here
    string word;
    string words;
    stringstream iss(input);
    while(iss>>word){
        reverse(word.begin(),word.end());
        words += word;
        words.push_back(' ');
    }
    return words;
}

int main()
{
    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
}

*/




// We can also do it using stack its more space efficient