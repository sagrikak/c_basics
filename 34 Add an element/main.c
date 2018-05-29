#include <stdio.h>
#include <conio.h>

int main()
{
    int n, t, ele, pos;
    printf("Enter the number of elements in the array.\n");
    scanf("%d", &n);

    int array[100];
    printf("Enter the elements.\n");

    for(t=0; t<n; t++)
        scanf("%d", &array[t]);

    printf("Enter the element you want to add in array.\n");
    scanf("%d", &ele);
    printf("Enter the position of new element.\n");
    scanf("%d", &pos);

    printf("The new array is\n");

    for(t=n-1; t>=(pos-1); t--)
        array[t+1]=array[t];

    array[pos-1]=ele;

    for(t=0; t<=n; t++)
        printf("%d\n", array[t]);

    getch();
    return 0;
}
