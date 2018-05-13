#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,sum=0;

    printf("Enter the two integers you want to add.\n");
    scanf("%d%d", &a,&b);

    sum=a+b;

    printf("The sum of the integers is %d.", sum);

    getch();
    return 0;
}
