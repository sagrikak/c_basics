#include <stdio.h>
#include <conio.h>

int main()
{
    int n, c, x, t;
    printf("Enter the number of rows you want in the pattern.\n");
    scanf("%d", &n);

    x=n;

    for(c=1; c<=n; c++)
    {
        for(t=x-1; t>=0; t--)
            printf(" ");
        for(t=1; t<(2*c) ; t++)
                printf("*");

        printf("\n");
        x--;
    }

    getch();
    return 0;
}
