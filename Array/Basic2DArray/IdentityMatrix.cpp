//                              Date:- 10 Aug, 2022



#include<stdio.h>
int main()
{
    int row_size,col_size;
    //Get size of matrix
    printf("Enter the row Size Of the Matrix:");
    scanf("%d",&row_size);
    printf("Enter the columns Size Of the Matrix:");
    scanf("%d",&col_size);

    int matrix[row_size][col_size];

    //Taking input of the matrix
    int i,j;
    printf("Enter the Matrix Element:\n");
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    //check Diagonal elements are 1 and rest elements are 0
    int point=0;
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            //check for diagonals element
        if(i==j && matrix[i][j]!=1)
        {
            point=1;
            break;
        }
        //check for rest elements
        else if(i!=j && matrix[i][j]!=0)
        {
            point=1;
            break;
        }
        }
    }
    if(point==1)
        printf("Given Matrix is not an identity matrix.");
    else
        printf("Given Matrix is an identity matrix.");
}