#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, t, reverse=0;
    printf("Enter any number to check if it's a palindrome.\n");
    scanf("%d", &n);

    t=n;

    while(n!=0)
    {
        reverse=reverse*10;
        reverse=n%10+reverse;
        n=n/10;
    }

    if(reverse==t)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");

    getch();
    return 0;
}
