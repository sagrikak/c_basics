#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,n,sum=0,a;
    printf("Enter the number of integers you want to add.\n");
    scanf("%d", &n);
    printf("Enter %d integers.\n", n);

    for(c=1; c<=n; c++)
    {
        scanf("%d", &a);
        sum=a+sum;
    }

    printf("The sum of the integers is %d.", sum);
    getch();
    return 0;
}
