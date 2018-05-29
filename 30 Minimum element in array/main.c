#include <stdio.h>
#include <conio.h>

int main()
{
    int n, c, p=0, min;
    printf("Enter the number of elements in array.\n");
    scanf("%d", &n);

    int array[n];

    for(c=0; c<n; c++)
    {
        printf("Enter element %d.\n", c+1);
        scanf("%d", &array[c]);
    }

    min=array[0];

    for(c=1; c<n; c++)
    {
        if(min > array[c])
        {
            min = array[c];
            p = c;
        }
    }

    printf("Minimum element in array is %d at %d position.\n", min, p+1);

    getch();
    return 0;
}
