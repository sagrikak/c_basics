#include <stdio.h>
#include <math.h>

int main()
{
    int n, c, count=0;
    printf("Enter any positive number to check if it's a prime number.\n");
    scanf("%d", &n);

    if(n<=0)
        printf("You did not enter a positive number.\n");

    if(n==1)
        printf("1 is neither prime nor consonant.\n");

    for(c=1; c<=sqrt(n); c++)
    {
        if(c*c==n)
            count++;
        else count+=2;
    }

    if(count==2)
        printf("The number you entered is a prime number.\n");
    else printf("The number you entered is not a prime number.\n");

    return 0;
}
