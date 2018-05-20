#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, x=1, n, t;
    printf("Enter the no. of rows you want in the pattern.\n");
    scanf("%d", &n);

    t=n;

    for(a=1; a<=n; a++)
    {
        for(b=1; b<t; b++)
            printf(" ");
        for(b=1; b<=a; b++)
        {
            printf("*");
            x=b;
            if(x<a && a>1)
             {
                printf("A");
                x++;

             }

        }
        printf("\n");
        t--;
    }

    getch();
    return 0;
}
