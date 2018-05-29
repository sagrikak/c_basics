#include <stdio.h>
#include <conio.h>

int main()
{
    int n, c, p, count=0;
    printf("Enter the number of elements in array.\n");
    scanf("%d", &n);

    int array[n];

    for(c=0; c<n; c++)
    {
        printf("Enter element %d.\n", c+1);
        scanf("%d", &array[c]);
    }

    printf("Enter the element you want to search.\n");
    scanf("%d", &p);

    for(c=0; c<n; c++)
    {
        if(array[c]==p)
        {
            printf("\n%d exists at location\n%d",p, c+1);
            count++;
        }
    }

    if(count==0)
        printf("%d does not exist in the array.\n", p);

    getch;
    return 0;
}
