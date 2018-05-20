#include <stdio.h>
#include <conio.h>

int main()
{
    int x,y,t;
    printf("Enter the values of x and y.\n");
    scanf("%d%d", &x,&y);

    printf("Before swapping x=%d and y=%d.\n", x, y);

    t=x;
    x=y;
    y=t;

    printf("After swapping x=%d and y=%d.", x, y);

    getch();
    return 0;
}
