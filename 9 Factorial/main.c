#include <stdio.h>
#include <conio.h>

int main()
{
    int x,fact=1,temp;
    printf("Enter any positive integer.\n");
    scanf("%d", &x);

    if(x>=0)
    {
        for(temp=x; temp>0; temp--)
        {
            fact=temp*fact;
        }
        printf("The factorial of the integer you entered is %d.", fact);
    }
    else
        printf("The integer you entered is not positive.\n");

    getch();
    return 0;
}
