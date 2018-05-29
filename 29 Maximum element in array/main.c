#include <stdio.h>
#include <conio.h>

int main()
{
    int n, c, max, p=0;
    printf("Enter the number of elements in array.\n");
    scanf("%d", &n);

    int array[n];

    for(c=0; c<n; c++)
    {
        printf("Enter element %d.\n", c+1);
        scanf("%d", &array[c]);
    }
    max = array[0];

    for(c=1; c<n; c++)
    {
        if(max < array[c])
        {
            max = array[c];
            p = c;
        }
    }

    printf("Maximum element is %d at %d position.", max, p+1);
    getch();
    return 0;
}
