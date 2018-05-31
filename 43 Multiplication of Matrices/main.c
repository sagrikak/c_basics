#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, k, m, n, o, p;
    printf("Enter the number of rows and columns in first matrix.\n");
    scanf("%d%d", &m, &n);
    printf("Enter the number of rows and columns in second matrix.\n");
    scanf("%d%d", &o, &p);

    int mat1[m][n];
    int mat2[o][p];
    int mat3[m][p];
    if(n!=o)
        printf("Sorry! the matrices can't be multiplied.\n");
    else
    {
        printf("Enter the elements of first matrix.\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
                scanf("%d", &mat1[i][j]);
        }
        printf("Enter the elements of second matrix.\n");
        for(i=0; i<o; i++)
        {
            for(j=0; j<p; j++)
                scanf("%d", &mat2[i][j]);
        }
        printf("The required matrix is \n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<p; j++)
            {
                mat3[i][j]=0;
                for(k=0; k<n ; k++)
                {
                    mat3[i][j]=mat1[i][k]*mat2[k][j]+mat3[i][j];
                }
            }
        }
        for(i=0; i<m; i++)
        {
            for(j=0; j<p; j++)
                printf("%d ", mat3[i][j]);
                printf("\n");
        }
    }
    return 0;
}
