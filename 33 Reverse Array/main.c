#include <stdio.h>
#include <conio.h>

int main()
{
    int c, p, t, n;
    printf("Enter the number of elements in the array.\n");
    scanf("%d", &n);

    int array[n];
    int revarray[n];

    printf("Enter the elements of array.\n");

    for(t=0; t<n; t++)
        scanf("%d", & array[t]);

    p=n;

    for(t=0; t<n; t++)
    {
        for(c=(p-1); c>=0; c--)
        {
            revarray[c]=array[t];
            p--;
            break;
        }
    }

    printf("The reverse array is\n");
    for(t=0; t<n; t++)
        printf("%d\n", revarray[t]);

    getch();
    return 0;
}
