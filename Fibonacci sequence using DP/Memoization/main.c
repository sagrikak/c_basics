//top down approach
#include <stdio.h>
#include <inttypes.h>

int64_t lookup[94];

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
	printf("Which term of the fibonacci series do you want to know?(<=93)\n");
	int n, i;
	scanf("%d", &n);
	for(i=0; i<=n; i++)
		lookup[i]=-1;
	printf("%"PRIu64" ", fib(n));
}