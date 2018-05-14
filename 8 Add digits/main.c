#include <stdio.h>
#include <conio.h>

int main()
{
    int x,temp,sum=0,y;
    printf("Enter any integer.\n");
    scanf("%d", &x);

    temp=x;

    while(temp!=0)
    {
        y=temp%10;
        sum=sum+y;
        temp=temp/10;
    }

    printf("The sum of the digits of %d is %d.", x,sum);
    getch();
    return 0;
}
