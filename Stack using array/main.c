#include <stdio.h>
#include <stdlib.h>
#define max 101

int arr[max];
int top=-1;

void push(int item)
{
    if(top==max-1)
    {
        printf("Stack Overflow.\n");
        return;
    }
    arr[++top]=item;
}

int pop()
{
    if(top==-1)
    {
        printf("Stack Underflow.\n");
        return;
    }
    int x;
    x=arr[top];
    top=top-1;
    return x;
}

void display()
{
    int i=0;
    while(i<=top)
    {
        printf("%d ", arr[i]);
        i++;
    }
}

void isEmpty()
{
    if(top==-1)
        printf("Yes\n");
    else printf("No\n");
}

int main()
{
    int n, item;
    while(n!=5)
    {
        printf("\n\nSelect an option.\n1.Push\n2.Pop\n3.Display\n4.IsEmpty\n5.Exit\n");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
                {
                    printf("Enter the element you want to push.\n");
                    scanf("%d", &item);
                    push(item);
                    break;
                }
            case 2:
                {
                    printf("The popped element is %d.\n", pop());
                    break;
                }
            case 3:
                {
                    printf("The stack is\n");
                    display();
                    break;
                }
            case 4:
                {
                    printf("Is the stack empty?\n");
                    isEmpty();
                    break;
                }
            case 5:
                exit(0);
            default:
                printf("Please enter a valid choice.\n");
        }
    }
    return 0;
}
