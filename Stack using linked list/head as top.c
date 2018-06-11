#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* link;
};
struct node* head2=NULL;

void push2(int item)
{
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    new->link=head2;
    head2=new;
}

void pop2()
{
    if(head2==NULL)
    {
        printf("Stack Underflow.\n");
        return;
    }
    printf("The popped element is %d.\n", head2->data);
    head2=head2->link;
}

void display2()
{
    struct node* temp=head2;
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
        printf("\n\nEnter your vchoice.\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
                {
                    printf("Enter the element.\n");
                    scanf("%d", &item);
                    push2(item);
                    break;
                }
            case 2:
                {
                    pop2();
                    break;
                }
            case 3:
                {
                    display2();
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

