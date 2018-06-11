#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* link;
};
struct node* head=NULL;

void push(int item)
{
    struct node* temp=head;
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    new->link=NULL;
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        while(temp->link!=NULL)
            temp=temp->link;
        temp->link=new;
    }
}

void pop()
{
    struct node* temp=head;
    if(head==NULL)
    {
        printf("Stack Underflow.\n");
        return;
    }
    while(temp->link->link!=NULL)
        temp=temp->link;
    printf("The popped element is %d.\n", temp->link->data);
    temp->link=NULL;
}

void display()
{
    struct node* temp=head;
    printf("The stack is\n");
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->link;
    }
}

int main()
{
    int n, item;
    while(1)
    {
        printf("\n\nEnter your choice.\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
                {
                    printf("Enter the element.\n");
                    scanf("%d", &item);
                    push(item);
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
            default:
                printf("Enter a valid choice.\n");

        }
    }

    return 0;
}
