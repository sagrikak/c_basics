#include <stdio.h>
#include <conio.h>
int power(int x, int p);

int main()
{
    int n, t=0, c, b, sum=0;
    printf("Enter any number to check if it is an Armstrong number.\n");
    scanf("%d", &n);

    b=n;

    while(b!=0)
    {   b=b/10;
        t++;
    }

    b=n;

    while(b!=0)
    {
        c=b%10;
        sum=power(c, t) + sum;
        b=b/10;
    }

    printf("sum=%d\n", sum);

    if(sum==n)
        printf("Armstrong number.\n");
    else printf("Not an Armstrong number.\n");

    getch();
    return 0;
}

int power(int x, int p)
{
    int y, result=1;
    for(y=1; y<=p; y++)
        result=result*x;
    return result;
}
