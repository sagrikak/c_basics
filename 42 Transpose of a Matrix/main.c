#include <stdio.h>
#include <conio.h>

int main()
{
    int row, col, i, j;
    printf("Enter the number of rows in the matrix.\n");
    scanf("%d", &row);
    printf("Enter the number of columns in the matrix.\n");
    scanf("%d", &col);
    printf("Enter the elements of matrix.\n");

    int mat1[row][col];
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("The transpose of the matrix is:\n");
    for(j=0; j<col; j++)
    {
        for(i=0; i<row; i++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
