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
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->link=head;
    head=temp;
}
void print()
{
    struct node* temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->link;
    }
}
int main()
{
    int i, n, x;
    printf("Enter the number of elements in the list.\n");
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
