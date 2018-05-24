#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, k, p;
    printf("Enter the number of rows.\n");
    scanf("%d", &a);

    b=a;
    for(k=0; k<a; k++)
    {
        for(p=1; p<b; p++)
            printf(" ");
        b--;

        for(p=0; p<=k; p++)
        {
            printf("%d ", c(k, p));
        }
        printf("\n");
    }

    getch();
    return 0;
}

int fact(int x)
{
    int t, fact=1;
    for(t=1; t<=x; t++)
        fact=fact*t;
    return fact;
}

int c(int n, int r)
{
    int com;
    com=fact(n)/(fact(n-r)*fact(r));
    return com;
}
