#include <stdio.h>
#include <conio.h>

int main()
{
    int n, c, a;
    printf("Enter the number of rows you want in your pattern.\n");
    scanf("%d", &n);

    if(n<=5)
    {
        for(c=1; c<=n; c++)
        {   for(a=c; a<n; a++)
                printf(" ");

            for(a=c; a<(2*c); a++)
                printf("%d", a);

            for(a=(2*c-2); a>=c; a--)
                printf("%d", a);

            printf("\n");
        }
    };

    if(n>5)
    {   for(c=1; c<=n; c++)
        {   for(a=c; a<n; a++)
                printf("   ");

            for(a=c; a<(2*c); a++)
                printf(" %d ", a);

            for(a=(2*c-2); a>=c; a--)
                printf(" %d ", a);

            printf("\n");
        }

    };
    getch();
    return 0;
}
