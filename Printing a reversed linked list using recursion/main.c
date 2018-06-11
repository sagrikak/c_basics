#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* link;
};

struct node* insert(struct node* head, int item)
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
    return head;
}

void print(struct node* head)
{
    struct node* temp=head;
    if(temp==NULL)
        return;
    else
    {
        printf("%d ", temp->data);
        print(temp->link);
    }
}

void reversePrint(struct node* head)
{
    struct node* temp=head;
    if(temp==NULL)
        return;
    else
    {
        reversePrint(temp->link);
        printf("%d ", temp->data);
    }
}

int main()
{
    struct node* head=NULL;
    int i, n, item;
    printf("Enter the number of elements.\n");
    scanf("%d", &n);
    printf("Enter the elements.\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &item);
        head=insert(head, item);
    }
    printf("The list is\n");
    print(head);
    printf("\nThe list in reverse order is\n");
    reversePrint(head);
    return 0;
}
