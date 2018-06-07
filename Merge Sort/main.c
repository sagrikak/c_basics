#include <stdio.h>
int a[200];
int b[200];

void merge(int beg, int mid, int end);

void mergesort(int beg, int end)
{
	if(beg>=end)
		return;
	int mid;
	mid=(beg+end)/2;
	mergesort(beg, mid);
	mergesort(mid+1, end);
	merge(beg, mid, end);
}

void merge(int beg, int mid, int end)
{
	int i=beg, j=mid+1, k=beg, x;
	while(i<=mid && j<=end)
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	while(i<=mid)
	{
		b[k]=a[i];
		i++;
		k++;
	}
	while(j<=end)
	{
		b[k]=a[j];
		j++;
		k++;
	}
	for(x=beg; x<=end; x++)
		a[x]=b[x];
}

int main()
{
	int n, i, j;
	printf("Enter the size of array.\n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	mergesort(0, n-1);
	printf("The Sorted array is\n");
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
	return 0;
}