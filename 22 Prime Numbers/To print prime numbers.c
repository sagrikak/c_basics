#include <stdio.h>
#include <conio.h>

int main()
{
    int n, c, t, x=3;
    printf("How many prime numbers do you want to print?\n");
    scanf("%d", &n);

    printf("\n2\n");

    for(t=1; t<n; t++)
    {
        for(c=2; c<=(x-1); c++)
        {
            if(x%c==0)
            {
                t--;
                break;
            }

            else
            {
                if(c==(x-1))
                {
                    printf("%d\n", x);
                    break;
                }
            }
        }
        x++;
    }

    getch();
    return 0;
}
