#include <stdio.h>
#include <conio.h>

int main()
{
    int n, t, c, x;
    printf("Enter the number of rows you want in the pattern.\n");
    scanf("%d", &n);

    t=n;

    for(c=1; c<=n; c++)
    {
        for(x=1; x<t; x++)
            printf(" ");
        for(x=1; x<c; x++)
            printf("*A");
        printf("*\n");
        t--;
    }

    getch();
    return 0;
}
