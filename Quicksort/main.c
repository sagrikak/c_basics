#include <stdio.h>

void quicksort(int a[], int beg, int end)
{
    int pivot, x, i, temp;
    if(beg>=end)
    return;
    
    temp=a[(beg+end)/2];
    a[(beg+end)/2]=a[end];
    a[end]=temp;
    
    pivot=a[end];
    x=beg;
    
    for(i=beg; i<end; i++)
    {
        if(a[i]<=pivot)
        {
            temp=a[x];
            a[x]=a[i];
            a[i]=temp;
            x++;
        }
    }
    temp=a[end];
    a[end]=a[x];
    a[x]=temp;
    quicksort(a, beg, x-1);
    quicksort(a, x+1, end);
}

int main()
{
	printf("Enter the size of array.\n");
	int n, i;
	scanf("%d", &n);
	int arr[n];
	printf("Enter the array.\n");
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	quicksort(arr, 0, n-1);
	printf("The sorted array is:\n");
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
