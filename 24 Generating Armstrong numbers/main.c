#include <stdio.h>
#include <conio.h>
int power(int e, int x);

int main()
{
    int first, second, c, t, p, k=0, sum=0;
    printf("Enter any two numbers.\n");
    scanf("%d%d", &first, &second);

    if(second<first)
    {
        t=first;
        first=second;
        second=t;
    }

    printf("\nThe Armstrong numbers between %d and %d are-\n", first, second);

    for(c=first; c<=second; c++)
    {
        p=c;
        k=0;

        while(p!=0)
        {
           p=p/10;
           k++;
        }

        p=c;
        sum=0;

        while(p!=0)
        {
            t=p%10;
            sum=sum + power(t, k);
            p=p/10;
        }

        if(sum==c)
            printf("%d\n", c);
    }

    getch();
    return 0;
}

int power(int e, int x)
{
    int a, b=1;
    for(a=1; a<=x; a++)
        b=e*b;
    return b;
}
