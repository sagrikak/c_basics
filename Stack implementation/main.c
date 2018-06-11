#include <stdio.h>
#include <stdlib.h>
#define max 5

struct stack
{
    int stk[max];
    int top;
};

struct stack A;

void push()
{
    int item;
    if(A.top==max-1)
    {
        printf("Stack Overflow.\n");
        return;
    }
    printf("Enter the element.\n");
    scanf("%d", &item);
    A.top=A.top+1;
    A.stk[A.top]=item;
}

void pop()
{
    if(A.top==-1)
    {
        printf("Stack Underflow.\n");
        return;
    }
    printf("The popped element is %d.\n", A.stk[A.top]);
    A.top--;
}

void display()
{
    int i;
    printf("The stack is\n");
    for(i=0; i<=A.top; i++)
        printf("%d ", A.stk[i]);
}

int main()
{
    int n;
    A.top = -1;
    while(1)
    {
        printf("\n\nEnter your choice.\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
                {
                    push();
                    break;
                }
            case 2:
                {
                    pop();
                    break;
                }
            case 3:
                {
                    display();
                    break;
                }
            case 4:
                exit(0);
            default: printf("Enter a valid choice.\n");
        }
    }
    return 0;
}
