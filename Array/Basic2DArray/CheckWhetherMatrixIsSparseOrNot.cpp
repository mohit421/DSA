//                                      Date: 10Aug, 2022


// Check whether matrix is sparse or not



#include<iostream>
using namespace std;
int main()
{

    int row_size,col_size;
    //Get size of matrix
    cout<<"Enter the row Size Of the Matrix:";
    cin>>row_size;
    cout<<"Enter the columns Size Of the Matrix:";
    cin>>col_size;

    int matrix[row_size][col_size];

    //Taking input of the matrix
    int i,j;
    cout<<"Enter the Matrix Element:\n";
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            cin>>matrix[i][j];
        }
    }

   int count_zero=0;
     //Count number of zeros present in the given Matrix
     for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            if(matrix[i][j]==0)
            {
              count_zero++;
            }
        }
    }
    //check if zeros present in the given Matrix>(row*column)/2
    if(count_zero>(row_size*col_size)/2)
        cout<<"Given Matrix is a Sparse Matrix.";
    else
        cout<<"Given Matrix is not a Sparse Matrix.";
}