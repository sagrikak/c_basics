#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int gcd(int first, int second)
{
    int a, b, t;
    a=first;
    b=second;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    //printf("hcf of %d %d=%d\n", first, second, a);
    return a;
}

int main()
{
	int n, m, b, x, y, k=100000, start;
	scanf("%d%d", &n, &m);
	int mag[n];
	int* edge=(int*)calloc(n, sizeof(int));
	for(b=0; b<n; b++)
		scanf("%d", &mag[b]);
	for(b=0; b<m; b++)
	{
		scanf("%d%d", &x, &y);
		edge[y-1]++;
	}
	for(b=0; b<n; b++)
	{
		if(edge[b]==0 && k>mag[b])
		{
			k=mag[b];
			start=k;
		}
	}
	x=mag[0];
	for(b=0; b<n; b++)
	{
		if(edge[b]==0 && start==b)
		{
			if(gcd(x, mag[b])<x)
				x=gcd(x, mag[b]);
		}
		else if(edge[b]>0)
		{
			if(gcd(x, mag[b])<x)
				x=gcd(x, mag[b]);
		}
	}
	printf("%d", x);
}