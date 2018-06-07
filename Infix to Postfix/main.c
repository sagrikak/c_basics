#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 500

struct stack
{
    char arr[max];
    int top;
};
struct stack s;
void push(char x)
{
    s.top++;
    s.arr[s.top]=x;
}

char pop()
{
    char x;
    x=s.arr[s.top];
    //free(s.arr+s.top);
    s.top--;
    return x;
}

void display()
{
    int i;
    for(i=0; i<=s.top; i++)
        printf("%c", s.arr[i]);
    printf("\n");
}

int prior(char a, char b)
{
    if(a=='+' || a=='-')
    {
        if(b=='+' || b=='-' || b=='*' || b=='/' || b=='^')
            return 1;
        else return 0;
    }
    else if(a=='*' || a=='/')
    {
        if(b=='^' || b=='*' || b=='/')
            return 1;
        else return 0;
    }
    else if(a=='^' && b!='^')
        return 0;
    else return 0;
}

int add(char* a, int len, char x)
{
    *(a+len)=x;
    len=len+1;
    return len;
}

int main()
{
    int t=0, j;
    scanf("%d", &t);
    for(j=0; j<t; j++)
    {
        int i, len=0, len2=0;
        char a;
        s.top=-1;
        char x[max], y[max];
        scanf("%s", &x);
        len=strlen(x);
        push('(');
        len=add(x, len, ')');
        for(i=0; i<len && s.top>=0 ; i++)
        {
            if(x[i]=='+' || x[i]=='-' || x[i]=='*' || x[i]=='/' || x[i]=='(' || x[i]=='^')
            {
                while(prior(x[i], s.arr[s.top]) && s.arr[s.top]!='(')
                {
                    a=pop();
                    len2=add(y, len2, a);
                }
                push(x[i]);
            }
            else if(x[i]==')')
            {
                while(s.arr[s.top]!='(')
                {
                    a=pop();
                    len2=add(y, len2, a);
                }
                a=pop();
            }
            else len2=add(y, len2, x[i]);
            //display();
        }
        for(i=0; i<len2; i++)
            printf("%c", y[i]);
        printf("\n");
    }
}
