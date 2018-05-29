#include <stdio.h>
#include <conio.h>

int main()
{
    int n, t, pos;
    printf("Enter the elements you want in array.\n");
    scanf("%d", &n);

    int array[100];
    printf("Enter the elements.\n");
    for(t=0; t<n; t++)
        scanf("%d", &array[t]);

    printf("Enter the location of the element you want to delete.\n");
    scanf("%d", &pos);

    if(pos>n)
        printf("Not possible! The array does not contain any element in this loction.\n");
    else
    {   for(t=pos; t<n; t++)
            array[t-1]=array[t];
        printf("The new array is\n");
        for(t=0; t<n-1; t++)
            printf("%d\n", array[t]);
    }
    getch();
    return 0;
}
