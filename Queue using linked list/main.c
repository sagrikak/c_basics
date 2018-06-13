#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* link;
};
struct node* front=NULL;
struct node* rear=NULL;

void enqueue(int x)
{
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->link=NULL;
    if(front==NULL)
    {
        front=new;
        rear=new;
    }
    else
    {
       rear->link=new;
       rear=rear->link;
    }
}

int dequeue()
{
    struct node* temp=front;
    int x;
    if(front==NULL)
    {
        printf("List is empty!\n");
    }
    else if(front==rear)
    {
        x=front->data;
        front=NULL;
        rear=NULL;
        free(temp);
        return x;
    }
    else
    {
        x=front->data;
        front=front->link;
        free(temp);
        return x;
    }
}

void display()
{
    struct node* temp=front;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->link;
    }
}

int main()
{
    int n, x;
    while(1)
    {
        printf("\nEnter your choice.\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
            {
                printf("Enter the integer.\n");
                scanf("%d", &x);
                enqueue(x);
                break;
            }
            case 2:
            {
                printf("The removed integer is %d.\n", dequeue());
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
                exit(0);
        }
    }
    return 0;
}
