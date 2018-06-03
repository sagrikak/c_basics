#include <stdio.h>

int main()
{
	int n, i, j, x, k;
	printf("Enter the size of array.\n");
	scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);

	for(i=1; i<n; i++)
	{
		k=arr[i];
		j=i;
		while(j>0 && arr[j-1]>k)
		{
			arr[j]=arr[j-1];
			j--;
		}
		arr[j]=k;
	}

	printf("The sorted array is\n");
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	return 0;
}