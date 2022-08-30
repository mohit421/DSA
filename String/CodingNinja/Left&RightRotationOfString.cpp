//                                                  Date:- 29 Aug, 2022



/*

#include<bits/stdc++.h>

void rev(int start,int end,string &arr){
    while(start<end){
        swap(arr[start++],arr[end--]);
    }
}
string leftRotate(string s, int d) {
    // Write your code here.
    if(d==0)return s;
    int n=s.length();
    d=d%n;
    rev(0,d-1,s);
    rev(d,n-1,s);
    rev(0,n-1,s);
    return s;
}

string rightRotate(string s, int d) {
    // Write your code here.
    if(d==0)return s;
    int n=s.length();
    d=d%n;
    rev(0,n-d-1,s);
    rev(n-d,n-1,s);
    rev(0,n-1,s);
    return s;
}

*/

//-----------------------------------------------------------------------------------------------------



/*


#include<bits/stdc++.h>

string leftRotate(string s, int d) {
    // Write your code here.
    if(d==0)return s;
    int n = s.length();
    d = d%n;
    return s.substr(d) + s.substr(0,d);
}

string rightRotate(string s, int d) {
    // Write your code here.
    if(d==0)return s;
    int n=s.length();
    d = d%n;
    return s.substr(n-d) + s.substr(0,n-d);
}

*/