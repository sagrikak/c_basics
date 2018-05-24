#include <stdio.h>
#include <conio.h>

int main()
{
    int n, c, t, k=1;
    printf("Enter the number of rows.\n");
    scanf("%d", &n);

    for(c=1; c<=n; c++)
    {
        for(t=1; t<=c; t++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }

    getch();
    return 0;
}
