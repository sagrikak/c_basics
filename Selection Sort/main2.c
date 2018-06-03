#include <stdio.h>

int arr[100];

void sel(int end)
{
	int i, max=0, x;
	if(end==0)
		return;
	for(i=end; i>=0; i--)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			x=i;
		}
	}
	arr[x]=arr[end];
	arr[end]=max;
	sel(end-1);
}

int main()
{
	int n, i, x;
	printf("Enter the size of array.\n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	sel(n-1);
	printf("The sorted array is\n");
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	return 0;
}