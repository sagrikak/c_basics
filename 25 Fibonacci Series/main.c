#include <stdio.h>
#include <conio.h>

int main()
{
    int n, t, first=0, second=1, sum=0;
    printf("Enter the number of terms you want.\n");
    scanf("%d", &n);

    printf("%d %d ", first, second);

    for(t=1; t<(n-1); t++)
    {
        sum=first+second;
        first=second;
        second=sum;
        printf("%d ", sum);
    }

    getch();
    return 0;
}
