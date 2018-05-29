#include <stdio.h>
#include <conio.h>

int main()
{
    int n, t, first, last, middle, find;
    printf("Enter the number of elements in array.\n");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of array in ascending order.\n");
    for(t=0; t<n; t++)
        scanf("%d", &array[t]);

    printf("Enter the element you want to search.\n");
    scanf("%d", &find);

    first=0;
    last=n-1;
    middle=(n)/2;

    while(array[middle]!=find)
    {
        if(find>array[middle])
            first=middle+1;

        else last=middle-1;

        middle=(first+last)/2;

        if(first>last)
        {   printf("The element does not exist in array.");
            break;
        }
    }
    if(array[middle]==find)
        printf("%d is at position number %d.\n", find, middle+1);

    getch();
    return 0;
}
