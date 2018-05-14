#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,sum=0,pro,dif;
    float quo;
    printf("Enter any two integers.\n");
    scanf("%d%d", &a,&b);

    sum=a+b;
    dif=a-b;
    pro=a*b;
    quo=a/(float)b;

    printf("The sum of the integers is %d.\nThe product of the integers is %d.\nThe difference of the integers is %d.\nThe quotient of the integers is %.2f.", sum, pro, dif, quo);

    getch();

    return 0;
}
