//                                              Date:- 28 Aug, 2022



/*
#include<bits/stdc++.h>
#define MAX_DIGITS 10

string encode(string &message)
{
    //   Write your code here.
    string ans;
    int count = 1;
    for(int i=0;i<message.size();i++){
        if(message[i]==message[i+1]){
            count++;
        }
        else{
            ans += message[i] + to_string(count);
            count = 1;
        }
    }
    return ans;
}
*/