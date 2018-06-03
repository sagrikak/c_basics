#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t, i, n1, n2, k, c, a, count1=0, rn1=0, count2=0, rn2, sum, j, o=1, count3=0, rsum;
    scanf("%d", &k);
    for(i=0; i<k; i++)
    {
        sum=0;
        rn1=0;
        count1=0;
        scanf("%d", &n1);
        a=n1;
        while(n1!=0)
        {
            n1=n1/10;
            count1++;
        }
        while(a!=0)
        {
            o=1;
            t=a;
            c=t%10;
            a=t/10;
            for(j=0; j<count1-1; j++)
                o=10*o;
            rn1=c*o+rn1;
            count1--;
        }
        rn2=0;
        count2=0;
        scanf("%d", &n2);
        a=n2;
        while(n2!=0)
        {
            n2=n2/10;
            count2++;
        }
        while(a!=0)
        {
            o=1;
            t=a;
            c=t%10;
            a=t/10;
            for(j=0; j<count2-1; j++)
                o=10*o;
            rn2=c*o+rn2;
            count2--;
        }
        sum=rn1+rn2;
        rsum=0;
        count3=0;
        a=sum;
        while(sum!=0)
        {
            sum=sum/10;
            count3++;
        }
        while(a!=0)
        {
            o=1;
            t=a;
            c=t%10;
            a=t/10;
            for(j=0; j<count3-1; j++)
                o=10*o;
            rsum=c*o+rsum;
            count3--;
        }
        printf("%d\n", rsum);
    }
    return 0;
}

