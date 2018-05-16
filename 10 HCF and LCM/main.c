#include <stdio.h>
#include <inttypes.h>

int64_t gcd(int64_t first, int64_t second)
{
    int64_t a, b, t;
    a=first;
    b=second;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int64_t foo(int64_t n)
{
    int64_t ret=0;
    int64_t i;
    for(i=1; i<=n; i++)
    {
        if(gcd(n, i)==1)
            ret++;
    }
    return ret;
}

int64_t sum(int64_t n)
{
    int64_t ret=0, i;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
            ret+=foo(i);
    }
    return ret;
}

int main()
{
    int i, t;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        int64_t n;
        scanf(" %"PRIu64"", &n);
        int64_t x=sum(n);
        printf("%"PRIu64"\n", x);
    }
    return 0;
}
