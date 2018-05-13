#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("Enter any integer.\n");
    scanf("%d", &a);

    if(a%2==0)
    {
        printf("The integer you entered is even.");
    }else{
        printf("The integer you entered is odd.");
    };

    getch();

    return 0;
}
