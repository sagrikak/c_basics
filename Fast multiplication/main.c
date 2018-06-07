#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main()
{
    long long int n1, n2;
    int t, i;
    int64_t m=1;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lld%lld", &n1, &n2);
        m=n1*n2;
        printf("%"PRIu64"\n", m);
    }
    return 0;
}
