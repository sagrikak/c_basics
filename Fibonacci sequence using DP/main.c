#include <stdio.h>
#include <inttypes.h>

int64_t lookup[100];

int64_t fib(int x)
{
	if(lookup[x]==-1)
	{
		if(x<=1)
			lookup[x]=x;
		else
			lookup[x]=fib(x-1)+fib(x-2);
	}
	return lookup[x];
}

int main()
{
	printf("How many terms do you want in your fibonacci series?\n");
	int n, i;
	scanf("%d", &n);
	for(i=0; i<=n; i++)
		lookup[i]=-1;

	for(i=1; i<=n; i++)
		printf("%"PRIu64" ", fib(i));
}