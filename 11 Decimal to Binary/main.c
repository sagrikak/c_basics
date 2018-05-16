#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dec,n,b;
    printf("Enter any decimal number.\n");
    scanf("%d", &dec);

    for(n=31; n>=0; n--)
    {
        b=dec >> n;
        if(b&1)
            printf("1");
        else
            printf("0");
    }
    getch();
    return 0;
}
