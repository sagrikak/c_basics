#include <stdio.h>
#include <conio.h>

int main()
{
    int row,col,i,j;
    printf("Enter the number of rows in matrices.\n");
    scanf("%d", &row);
    printf("Enter the number of columns in matrices.\n");
    scanf("%d", &col);

    int mat1[row][col];
    int mat2[row][col];
    int mat3[row][col];

    printf("Enter the elements of first matrix.\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of second matrix.\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("The result of subtraction of second matrix from first matrix is as follows.\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            mat3[i][j]=mat1[i][j] - mat2[i][j];
        }
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
