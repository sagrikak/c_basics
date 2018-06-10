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
void insertBetween(int y, int pos)
{
    int i;
    struct node* temp=head;
    struct node* new=(struct node*) malloc(sizeof(struct node));
    if(pos==1)
    {
        new->link=head;
        new->data=y;
        head=new;
    }
    else
    {
        for(i=0; i<pos-2; i++)
            temp=temp->link;
        new->link=temp->link;
        temp->link=new;
        new->data=y;
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
int main()
{
    int i, n, x, y, pos;
    printf("Enter the number of elements in list.\n");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter the element %d.\n", i+1);
        scanf("%d", &x);
        insert(x);
    }
    printf("Enter the element you want to enter.\n");
    scanf("%d", &y);
    printf("Enter the position of new element in list.\n");
    scanf("%d", &pos);
    insertBetween(y, pos);
    printf("The final list is\n");
    print();
    return 0;
}
