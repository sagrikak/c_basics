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
int main()
{
    int i, n, x;
    printf("Enter the number of elements in list.\n");
    scanf("%d", &n);
    printf("Enter the elements.\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &x);
        printf("List is\n");
        insert(x);
        print();
        printf("\n");
    }
    return 0;
}
