#include<stdio.h>

int main()
{
    int n;
    int matrix[3][3]= {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}
    };
    /*sizeof(matrix) gives the total size of the matrix in bytes.
      sizeof(matrix[0]) gives the size of one row (i.e., the number of elements in the row multiplied by the size of each element).
      sizeof(matrix[0][0]) gives the size of a single element.*/
    int row = sizeof(matrix)/sizeof(matrix[0]);     
    int column =sizeof(matrix[0])/sizeof(matrix[0][0]);
    //transpose
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < column; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j]=matrix[n-i-1][i];
            matrix[n-i-1][i]=temp;
        }
        
    }

    //reverse
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j <row/2; j++)
        {
            int temp=matrix[j][i];
            matrix[j][i]=matrix[n-i-1][i];
            matrix[n-i-1][i]=temp;
        }
        
    }
    

     printf("The 3x3 Matrix is:\n");
    for (int i = 0; i < row; i++) {        // Loop through rows
        for (int j = 0; j < column; j++) {    // Loop through columns
            printf("%d ", matrix[i][j]); // Print each element with space
        }
        printf("\n");  // Print newline after each row
    }
    
    
    return 0;
}