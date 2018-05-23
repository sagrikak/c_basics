#include <stdio.h>
#include <conio.h>

int main()
{
    int c, t, n, x;
    printf("Enter the number of rows you want in your pattern.\n");
    scanf("%d", &n);

    x=n;
    for(c=1; c<=(n+1)/2; c++)
    {
        for(t=1; t<=x/2; t++)
            printf(" ");
        for(t=1; t<(2*c); t++)
            printf("*");

        printf("\n");
        x--;
        x--;
    }

    x=n;
    for(c=1; c<=(n-1)/2; c++)
    {
        for(t=1; t<=c; t++)
            printf(" ");
        for(t=(x-2); t>=1; t--)
            printf("*");

        printf("\n");
        x--;
        x--;
    }
    getch();
    return 0;
}
