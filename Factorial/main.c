#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n, j, i;
    int fact, count=0;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        fact=1;
        count=0;
        scanf("%d", &n);
        for(j=2; j<=n; j++)
        {

            fact=j*fact;
            while(fact%10==0)
            {
                count++;
                fact=fact/10;
            }
            if(fact%5!=0)
                fact=fact%10;
        }
        printf("%d\n", count);
    }
    return 0;
}
