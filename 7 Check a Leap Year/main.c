#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter any year.\n");
    scanf("%d", &year);

    if(year%4==0)
        if(year%100==0)
            if(year%400==0)
            printf("The year is a leap year.");
            else
            printf("The year is not a leap year.");
        else
        printf("The year is a leap year.");
    else
        printf("The year is not a leap year.");

    getch();

    return 0;
}
