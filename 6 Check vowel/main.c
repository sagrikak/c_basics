#include <stdio.h>
#include <conio.h>

int main()
{
    char x;
    printf("Enter any alphabet.\n");
    scanf("%c", &x);

    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
        printf("The alphabet you entered is a vowel.");
    else
        printf("The alphabet you entered is a consonant.");

    getch();

    return 0;
}
