#include <stdio.h>
#include <conio.h>

int main()
{
    int m, n, c, t, i;
    printf("Enter the number of elements in first array.\n");
    scanf("%d", &n);
    int array1[n];
    printf("Enter the elements of first array.\n");

    for(t=0; t<n; t++)
        scanf("%d", &array1[t]);

    printf("Enter the number of elements in second array.\n");
    scanf("%d", &m);
    int array2[m+n];
    printf("Enter the elements of second array.\n");

    for(t=0; t<m; t++)
        scanf("%d", &array2[t]);

    for(t=0; t<n; t++)
        array2[m+t]=array1[t];

    for(t=0; t<m+n-1; t++)
    {
        for(i=0; i<m+n-t-1; i++)
        {
            if(array2[i]>array2[i+1])
            {
                c=array2[i];
                array2[i]=array2[i+1];
                array2[i+1]=c;
            }
        }
    }
    printf("Merged and sorted array is\n");
    for(t=0; t<m+n; t++)
        printf("%d\n", array2[t]);
    getch();
    return 0;
}
