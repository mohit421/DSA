//                                      Date: 11 Aug, 2022



// Problem: Reverse string wordwise

/*


#include <iostream>
#include<cstring>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
    int c = 0;
    string s="";
    for(int i=input.size()-1;i>=0;i--){
        if(input[i]==' '){
            s += input.substr(i+1,c);
            s += ' ';
            c=0;
        }
        else
            c++;
    }
    s+= input.substr(0,c);
    return s;
}
int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}



*/


// ---------------------------------------------------------------------------------------------

//                          Code from  coding ninjas

// this time here is any problem after submitting gives internal error

/*


#include <iostream>
#include <vector>
using namespace std;

string reverseStringWordWise(string input)
{
    vector<string> words;
    int n = input.size();
    string word;
    // Extract each word
    for (int i = 0; i < n; i++)
    {
        if (input[i] == ' ')
        {
            words.push_back(word);
            word = "";
        }
        else
        {
            word.push_back(input[i]);
        }
    }
    words.push_back(word);
    
    // Reverse the words in the sentence
    int i = 0, j = words.size() - 1;
    while (i < j)
    {
        swap(words[i], words[j]);
        i++;
        j--;
    }

    // Append back the words
    string ans;
    for (int i = 0; i < words.size(); i++)
    {
        ans.append(words[i]);
        ans.push_back(' ');
    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}



*/


//  ---------------------------------------------------------------------------------

/*

TC: O(N^2)
SC:O(1)

*/

/*


#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
    reverse(input.begin(),input.end());
    input.insert(input.end(),' ');
    int n = input.length();
    int j = 0;
    for(int i=0;i<n;i++){
        if(input[i]==' '){
            reverse(input.begin()+j,input.begin()+i);
            j = i+1;
        }
    }
    input.pop_back();
    return input;
}
int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}

*/