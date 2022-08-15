//                                      Date: 9 Aug, 2022


// Problem:- Row Wave Form



/*

vector<int> rowWaveForm(vector<vector<int>> &mat) {
    // Write your code here.
    int r = mat.size();
    int c = mat[0].size();
    vector<int>vec;
    for(int i=0;i<r;i++){
        if(i%2==0){
            for(int j=0;j<c;j++){
                vec.push_back(mat[i][j]);
            }
        }
        else{
            for(int j=c-1;j>=0;j--){
                vec.push_back(mat[i][j]);
            }
        }
    }
    return vec;
}

*/