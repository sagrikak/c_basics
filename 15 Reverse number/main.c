#include <stdio.h>
#include <conio.h>

int main()
{
    int n,t,b,c;
    scanf("%d", &n);
    b=n;

    while(b!=0)
    {
        t=b;
        c=t%10;
        b=t/10;
        printf("%d", c);
    }
    return 0;
}
