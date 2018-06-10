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
    if(head==NULL)
    {
        new->link=NULL;
        new->data=x;
        head=new;
        return;
    }
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    new->link=NULL;
    new->data=x;
    temp->link=new;
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

void delete(int pos)
{
    int i;
    struct node* temp=head;
    struct node* temp1;
    if(pos==1)
    {
        head=head->link;
        free(temp);
        return;
    }
    for(i=0; i<pos-2; i++)
    {
        temp=temp->link;
    }
    temp1=temp->link;
    temp->link=temp1->link;
    free(temp1);
}
int main()
{
    int n, i, x, pos;
    printf("Enter the number of elements in the list.\n");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter the element %d.\n", i+1);
        scanf("%d", &x);
        insert(x);
    }
    printf("\nEnter the position of the element to be deleted.\n");
    scanf("%d", &pos);
    delete(pos);
    printf("The list is\n");
    print();
    return 0;
}
