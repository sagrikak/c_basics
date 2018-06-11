#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* link;
};

struct node* head=NULL;

void insert(int item)
{
    struct node* temp=head;
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    new->link=NULL;
    if(head==NULL)
        head=new;
    else
    {
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=new;
    }
}

void print()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->link;
    }
}

void reverse(struct node* temp)
{
    if(temp->link==NULL)
    {
        head=temp;
        return;
    }
    reverse(temp->link);
    struct node* temp1=temp->link;
    temp1->link=temp;
    temp->link=NULL;
}

int main()
{
    int i, n, item;
    printf("Enter the number of elements.\n");
    scanf("%d", &n);
    printf("Enter the elements.\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &item);
        insert(item);
    }
    printf("The list is\n");
    print();
    printf("\nThe reversed list is\n");
    reverse(head);
    print();
    return 0;
}
