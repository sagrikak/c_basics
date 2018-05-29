#include <stdio.h>
#include <conio.h>

int main()
{
    int n, t, c, i;
    printf("Enter the number of elements in array.\n");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements.\n");
    for(t=0; t<n; t++)
        scanf("%d", &array[t]);

    for(t=0; t<n-1; t++)
    {
        for(i=0; i<n-t-1; i++)
        {
            if(array[i]>array[i+1])
            {
            c=array[i];
            array[i]=array[i+1];
            array[i+1]=c;
            }
        }
    }
    printf("Sorted array is \n");
    for(t=0; t<n; t++)
        printf("%d\n", array[t]);

    getch();
    return 0;
}
