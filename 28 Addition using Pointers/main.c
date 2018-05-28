#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, *x=&a, *y=&b;
    int sum=0;
    printf("Enter two numbers.\n");
    scanf("%d%d", x, y);

    sum = *x + *y;

    printf("%d", sum);

    getch();
    return 0;
}
