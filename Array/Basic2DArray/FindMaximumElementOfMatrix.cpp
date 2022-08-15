//                                          Date:- 10 Aug, 2022


/*


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

     //compute the maximum element of the given 2d array
    int max=INT_MIN;
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
               if(matrix[i][j]>=max)
               max=matrix[i][j];
        }
    }
    //Display the largest element of the given matrix
    printf("The Maximum element of the Given 2d array is: %d",max);
}

*/