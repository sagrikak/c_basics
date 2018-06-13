//0-1 means either pick it or leave it. There are no partial items.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))

int knapsack(int n, int w, int wt[], int val[])
{
	if(n==0 || w==0)
		return 0;
	else if(wt[n-1]>w)
		return knapsack(n-1, w, wt, val);
	else
		return max(val[n-1]+knapsack(n-1, w-wt[n-1], wt, val) , knapsack(n-1, w, wt, val));
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