#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c,t;
    printf("Enter the number of rows you want in the pattern.\n");
    scanf("%d", &n);

    for(c=1; c<=n; c++)
    {   for(t=1; t<=c; t++)
        {
           printf("*");
        }
        printf("\n");
    }

    getch();
    return 0;
}
