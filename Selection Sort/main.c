#include <stdio.h>

int main()
{
	int x, temo, max=0, i, n, j;
	printf("Enter the size of array.\n");
	scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for(i=n-1; i>=0; i--)
	{
		max=0;
		for(j=0; j<=i; j++)
		{
			if(arr[j]>max)
			{
				max=arr[j];
				x=j;
			}
		}
		arr[x]=arr[i];
		arr[i]=max;
	}
	printf("The sorted array is\n");
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	return 0;
}