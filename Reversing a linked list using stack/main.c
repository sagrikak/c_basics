#include <stdio.h>
#include <stdlib.h>
#define max 101

struct node
{
    int data;
    struct node* link;
};
struct node* head=NULL;
struct stack
{
    int* arr[max];
    int top;
};
struct stack s;

void insert(int item)
{
    struct node* temp=head;
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    new->link=NULL;
    if(head==NULL)
    {
        head=new;
        return;
    }
    while(temp->link!=NULL)
        temp=temp->link;
    temp->link=new;
}

void display()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->link;
    }
}

void reverse()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        s.top++;
        s.arr[s.top]=temp;
        temp=temp->link;
    }
    head=s.arr[s.top];
    s.top--;
    struct node* temp1=head;
    while(s.top>=0)
    {
        temp1->link=s.arr[s.top];
        s.top--;
        temp1=temp1->link;
    }
    temp1->link=NULL;
}

int main()
{
    s.top=-1;
    int n, i, item;
    printf("Enter the number of elements.\n");
    scanf("%d", &n);
    printf("Enter the elements.\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &item);
        insert(item);
    }
    printf("The list is\n");
    display();
    printf("\nThe reversed list is\n");
    reverse();
    display();
    return 0;
}
