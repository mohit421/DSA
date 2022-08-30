//                                  Date: 15 Aug, 2022



/*

TC: O(N)
SC: O(N)
*/

/*

#include<bits/stdc++.h>
string convertString(string str) 
{
	// WRITE YOUR CODE HERE
    vector<string>words;
    string word;
    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            words.push_back(word);
            word = "";
        }
        else
            word.push_back(str[i]);
    }
    words.push_back(word);
    for(int i=0;i<words.size();i++){
        words[i][0] = toupper(words[i][0]);
    }
    string ans;
    for(int i=0;i<words.size();i++){
        ans += words[i];
        ans.push_back(' ');
    }
    return ans;
}


*/


// -------------------------------------------------------------------------------------------------

/*
TC: O(N)
SC: O(N)

*/


/*

#include<bits/stdc++.h>
string convertString(string str) 
{
	// WRITE YOUR CODE HERE
    int n = str.size();
     string s(n,' ');
    s[0] = toupper(str[0]);
    for(int i=1;i<n;i++){
        if(str[i]==' '){
            s[i]=' ';
            i++;
            s[i] = toupper(str[i]);
        }
        else
            s[i] = str[i];
    }
    return s;
}


*/





// Space optimized

/*
TC: O(N)
SC:O(1)
*/

/*

#include<bits/stdc++.h>
string convertString(string str) 
{
	// WRITE YOUR CODE HERE
    bool cap = true;
    for(int i=0;i<str.size();i++){
        if(isalpha(str[i]) && cap==true){
            str[i] = toupper(str[i]);
            cap = false;
        }
        else if(isspace(str[i])){
            cap = true;
        }
    }
    return str;
}

*/



// ----------------------------------------------------------------------------------------------


/*

#include<bits/stdc++.h>
string convertString(string str) 
{
	// WRITE YOUR CODE HERE
    int n = str.size();
    str[0] = toupper(str[0]);
    for(int i=1;i<n;i++){
        if(str[i]==' '){
            str[i]=' ';
            i++;
            str[i] = toupper(str[i]);
        }
        else
            str[i] = str[i];
    }
    return str;
}


*/