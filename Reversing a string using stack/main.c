#include <stdio.h>
#include <stdlib.h>
#define max 101

struct stack
{
    char arr[max];
    int top;
};

struct stack s;

void reverse()
{
    char str[max];
    int i=0;
    printf("Enter the string.\n");
    scanf(" %[^\n]s", &str);
    while(str[i]!='\0')
    {
        s.top++;
        s.arr[s.top]=str[i];
        i++;
    }
    printf("The reversed string is\n");
    while(s.top>=0)
    {
        printf("%c", s.arr[s.top]);
        s.top--;
    }
}

int main()
{
    s.top=-1;
    reverse();
    return 0;
}
