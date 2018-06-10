#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* head=NULL;
void insert(int x)
{
    struct node* temp=head;
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->link=NULL;
    new->data=x;
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
void reverse()
{
    struct node *current, *prev, *next;
    current=head;
    prev=NULL;
    while(current != NULL)
    {
        next=current->link;
        current->link=prev;
        prev=current;
        current=next;
    }
    head=prev;
}
int main()
{
    int i, n, x;
    printf("Enter the number of elements in list.\n");
    scanf("%d", &n);
    printf("Enter the elements.\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &x);
        insert(x);
    }
    reverse();
    printf("Reversed list is\n");
    print();
    return 0;
}
