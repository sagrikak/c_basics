#include <stdio.h>
#include <stdlib.h>

int lis(int arr[], int n)
{
	int lis[n], i, j, max=0;
	lis[0]=1;
	for(i=1; i<n; i++)
	{
		lis[i]=1;
		for(j=0; j<i; j++)
		{
			if(arr[j]<arr[i] && lis[i]<lis[j]+1)
				lis[i]=lis[j]+1;
		}
	}
	for(i=0; i<n; i++)
	{
		//printf("%d ", lis[i]);
		if(lis[i]>max)
			max=lis[i];
	}
	//free(lis);

	return max;
}

int main()
{
	int i, n;
	printf("Enter the number of elements in array.\n");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the array.\n");
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	printf("The length of the longest increasing subsequence is %d.\n", lis(arr, n));
}