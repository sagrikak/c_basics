#include <stdio.h>
#include <conio.h>

int main()
{
    int length;
    printf("Enter the string.\n");
    char str[100];
    scanf(" %[^\n]s", &str);
    length=strlen(str);
    printf("Length of the string=%d", length);
    getch();
    return 0;
}
