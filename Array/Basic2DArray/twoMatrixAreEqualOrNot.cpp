//                                          Date: 10 Aug, 2022

// Problem:- Program to check whether two element are equal or not



/*


#include<iostream>
using namespace std;
int main()
{

    int row_size,col_size;
    //Get size of 1st matrix
    cout<<"Enter the row Size Of the 1st Matrix:";
    cin>>row_size;
    cout<<"Enter the columns Size Of the 1st Matrix:";
    cin>>col_size;

    //Get size of 2nd matrix
    int row_size1,col_size1;
    cout<<"Enter the row Size Of the 2nd Matrix:";
    cin>>row_size1;
    cout<<"Enter the columns Size Of the 2nd Matrix:";
    cin>>col_size1;

    int matrix[row_size][col_size];

    //Taking input of the 1st matrix
    int i,j;
    cout<<"Enter the 1st Matrix Element:\n";
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            cin>>matrix[i][j];
        }
    }

    int matrix1[row_size][col_size];

    //Taking input of the 2nd matrix
    cout<<"Enter the 2nd Matrix Element:\n";
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            cin>>matrix1[i][j];
        }
    }
    //Compare two matrices
     int point=0;
    if(row_size==row_size1 && col_size==col_size1)
    {
         for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
        if(matrix[i][j]!=matrix1[i][j])
        {
            point=1;
            break;
        }
        }}
    }
    else
    {
        cout<<"Two matrices are not equal.";
        exit(0);
    }
    if(point==1)
         cout<<"Two matrices are not equal.";
    else
        cout<<"Two matrices are equal.";
}


*/