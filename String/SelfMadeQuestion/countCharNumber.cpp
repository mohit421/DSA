//                                  Date:- 28 Aug, 2022


/*

Question:-
You have given a text message and you have to encode it as follow:-

example:-
Input:-

5
aabbc
abcd
abbdcaas
sadasd
adsad


Output:- 
a2b2c1
a1b1c1d1
a3b2c1d1s1
a2d2s2
a2d2s1
*/

/*

#include<bits/stdc++.h>
bool sortbysecdesc(const pair<int,char> &a, const pair<int,char> &b) {
       if(a.second==b.second)
            return a.first<b.first;
       return a.second > b.second;
}

string encode(string &message)
{
    //   Write your code here.
    unordered_map<char,int>mpp;
    for(auto it:message){
        mpp[it]++;
    }
    vector<pair<char,int>>pr(mpp.begin(),mpp.end());
    sort(pr.begin(),pr.end(),sortbysecdesc);
    string ans;
    for(auto i:pr){
        ans += i.first;
        ans.push_back(i.second + '0');
    }
    return ans;
}

*/