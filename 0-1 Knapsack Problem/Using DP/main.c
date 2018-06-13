#include <stdio.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))

int knapsack(int n, int w, int wt[], int val[])
{
	int k[n+1][w+1], i, j;
	for(i=0; i<=n; i++)
	{
		for(j=0; j<=w; j++)
		{
			if(i==0 || j==0)
				k[i][j]=0;
			else if(wt[i-1]>j)
				k[i][j]=k[i-1][j];
			else
				k[i][j]=max(val[i-1]+k[i-1][j-wt[i-1]] , k[i-1][j]);
			//printf("i=%d j=%d k=%d\n", i, j, k[i][j]);
		}
	}
	return k[n][w];
}

int main()
{
	int n, w, i;
	printf("Enter the number of items and knapsack capacity.\n");
	scanf("%d%d", &n, &w);
	int val[n], wt[n];
	printf("Enter the value of each item.\n");
	for(i=0; i<n; i++)
		scanf("%d", &val[i]);
	printf("Enter the weight of each item.\n");
	for(i=0; i<n; i++)
		scanf("%d", &wt[i]);
	printf("The maximum value in the knapsack is %d.\n", knapsack(n, w, wt, val));
}