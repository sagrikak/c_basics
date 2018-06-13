//bottom up approach
//calculates for each number
#include <stdio.h>
#include <inttypes.h>

int64_t fi[94];

void fib(int n)
{
	int i;
	fi[0]=0;
	fi[1]=1;
	for(i=2; i<=n; i++)
		fi[i]=fi[i-1]+fi[i-2];
}

int main()
{
	printf("How many terms do you want in Fibonacci series?(<=93)\n");
	int n, i;
	scanf("%d", &n);
	fib(n);
	for(i=1; i<=n; i++)
		printf("%d: %"PRIu64"\n", i, fi[i]);
}