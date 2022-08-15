//                                      Date:- 9 Aug, 2022




// problem source https://www.csinfo360.com/p/matrix-or-2d-array-programming-practice.html


// Problem: Multiplication of two matrix




/*

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter row and col of 2nd matrix "<<endl;
    int r1,c1;cin>>r1>>c1;
    int arr1[r1][c1];
    cout<<"---------------   Enter 1st matrix ---------------"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter row and col of 2nd matrix "<<endl;
    int r2,c2;cin>>r2>>c2;
    int arr2[r2][c2];
    cout<<"---------------   Enter 2nd matrix   ---------------"<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>arr2[i][j];
        }
    }
    // multiplication of two matrix
    cout<<"Enter row and col of 2nd matrix "<<endl;
    int multMat[r1][c2];
    int sum = 0;
    if(c1==r2){
        cout<<"-----------------multiplication of two matrix--------------------"<<endl;
        for(int i=0;i<r1;i++){
            for(int j=0;j<r1;j++){
                sum = 0;
                for(int k=0;k<r2;k++){
                    sum += arr1[i][k]* arr2[k][j]; 
                }
                multMat[i][j] = sum;
            }
        }
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                cout<<multMat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    
}

*/



