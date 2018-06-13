//program to calculate nCr
//use formula nCr = (n-1)C(r-1) + (n-1)Cr
//using tabulation
#include <stdio.h>
#include <string.h>

int min(int x, int y)
{
	if (x<y)
		return x;
	else return y;
}

int nCr(int n, int r)
{
	int lookup[r+1];
	int i, j;
	memset(lookup, 0, sizeof(lookup));
	lookup[0]=1;
	for(i=1; i<=n; i++)
	{
		for(j=min(i, r); j>0; j--)
		{
			lookup[j]=lookup[j]+lookup[j-1];
		}
		for(j=0; j<=r; j++)
		{
			printf("%d ", lookup[j]);
		}
		printf("\n");
	}
	return lookup[r];
}

int main()
{ 
	printf("Enter the values of n and r.\n");
	int n, r;
	scanf("%d%d", &n, &r);
	printf("nCr=%d\n", nCr(n, r));
}