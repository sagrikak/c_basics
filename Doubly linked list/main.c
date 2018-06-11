#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* prev;
    struct node* next;
};
struct node* head=NULL;

void insert(int item)
{
    struct node* temp=head;
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    new->next=NULL;
    if(head==NULL)
    {
        head=new;
        new->prev=NULL;
    }
    else
    {
        while(temp->next!=NULL)
            temp=temp->next;
        new->prev=temp;
        temp->next=new;
    }
}

void delete(int pos)
{
    int i;
    struct node* temp=head;
    if(head==NULL)
    {
        printf("Deletion is not possible.\n");
    }
    else if(pos==1)
    {
        head=head->next;
        head->prev=NULL;
    }
    else
    {
        for(i=0; i<pos-2; i++)
            temp=temp->next;
        temp->next=temp->next->next;
        temp->next->prev=temp;
    }
}

void print()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
}

void printreverse()
{
    struct node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->prev;
    }
}

int main()
{
    int i, n, pos, item;
    printf("Enter the number of elements.\n");
    scanf("%d", &n);
    printf("Enter the numbers.\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &item);
        insert(item);
    }
    printf("Enter the position of element you want to delete.\n");
    scanf("%d", &pos);
    printf("The list is\n");
    print();
    delete(pos);
    printf("\nThe reversed list is\n");
    printreverse();
    return 0;
}
