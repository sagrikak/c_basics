#include <stdio.h>
#include <conio.h>
int fact(int a);

int main()
{
    int n,r,C,P;
    printf("Enter the value of n to get nCr and nPr.\n");
    scanf("%d", &n);
    printf("Enter the value of r to get nCr and nPr.\n");
    scanf("%d", &r);

    C=fact(n)/(fact(r)*fact(n-r));
    P=fact(n)/fact(n-r);

    printf("The value of nCr is %d.\n", C);
    printf("The value of nPr is %d.", P);

    getch();
    return 0;
}

int fact(int a)
{
    int c,f=1;
    for(c=1; c<=a; c++)
        f=c*f;
    return (f);
}
