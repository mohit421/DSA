//                                              Date: 29 Aug, 2022


/*



int minimumParentheses(string pattern) {
    // Write your code here.
    // pattern is the given string.
    string s = pattern;
    int cntOpn = 0;
    int cntClo = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') cntOpn++;
        else if(s[i]==')' && cntOpn>0) cntOpn--;
        else cntClo++;
    }
    int ans = cntClo + cntOpn;
    return ans;
}

*/


//------------------------------------------------------------------------------------

/*

int minimumParentheses(string pattern) {
    // Write your code here.
    // pattern is the given string.
    string s = pattern;
    int cntOpn = 0;
    int cntClo = 0;
    for(int i=0;i<s.size();i++){
         cntOpn += s[i]=='('?1:-1;   
        if(cntOpn==-1){
            cntOpn++;cntClo++;
        }
    }
    return cntOpn + cntClo;
}

*/