#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    struct node* left;
    int data;
    struct node* right;
    struct node* link;
};
struct node* root=NULL;
struct node* queue=NULL;

void insert(int x)
{
    struct node* temp=root;
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->left=NULL;
    new->right=NULL;
    if(root==NULL)
    {
        root=new;
        return;
    }
    while(1)
    {
        while(x<=temp->data)
        {
            if(temp->left==NULL)
            {
                temp->left=new;
                return;
            }
            else temp=temp->left;
        }
        while(x>temp->data)
        {
            if(temp->right==NULL)
            {
                temp->right=new;
                return;
            }
            else temp=temp->right;
        }
    }
}

void enqueue(struct node* item)
{
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=item->data;
    new->right=item->right;
    new->left=item->left;
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp=queue;
    if(temp==NULL)
        queue=new;
    else
    {
        while(temp->link!=NULL)
            temp=temp->link;
        temp->link=new;
    }
}

struct node* dequeue()
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp=queue;
    queue=queue->link;
    return temp;
}

void levelorder()
{
    struct node* t=(struct node*)malloc(sizeof(struct node));
    enqueue(root);
    while(queue!=NULL)
    {
        t=dequeue();
        printf("%d ", t->data);
        if(t->left != NULL)
            enqueue(t->left);
        if(t->right != NULL)
            enqueue(t->right);
    }
}

void predisplay(struct node* temp)
{
    if(temp==NULL)
        return;
    printf("%d ", temp->data);
    predisplay(temp->left);
    predisplay(temp->right);
}

void indisplay(struct node* temp)
{
    if(temp==NULL)
        return;
    indisplay(temp->left);
    printf("%d ", temp->data);
    indisplay(temp->right);
}

void postdisplay(struct node* temp)
{
    if(temp==NULL)
        return;
    postdisplay(temp->left);
    postdisplay(temp->right);
    printf("%d ", temp->data);
}

struct stack
{
    struct node* stk[500000];
    int top;
};
 
struct stack A;
     
void push(struct node* item)
{
    A.top=A.top+1;
    A.stk[A.top]=item;
}
     
struct node* pop()
{
    A.top--;
    return A.stk[A.top+1];
}

void traverse()//traversing tree without recursion//inorder
{
    struct node* cur=root;
    bool done=0;
    while(!done)
    {
        if(cur!=NULL)
        {
            push(cur);
            cur=cur->left;
        }
        else
        {
            if(A.top>-1)
            {
                cur=pop();
                printf("%d ", cur->data);
                cur=cur->right;
            }
            else done=1;
        }
    }
}

struct node* search(int item)
{
    struct node* temp=root;
    while(temp!=NULL)
    {
        if(item<temp->data)
            temp=temp->left;
        else if(item>temp->data)
            temp=temp->right;
        else if(item==temp->data)
            return temp;
    }
    if(temp==NULL)
        return temp;
}

int height(struct node* temp)
{
    if(temp==NULL)
        return -1;
    if(height(temp->left)>height(temp->right))
        return height(temp->left)+1;
    else return height(temp->right)+1;
}

struct node* min(struct node* temp)
{
    while(temp->left!=NULL)
        temp=temp->left;
    return temp;
}

struct node* delete(struct node* temp, int y)
{
    if(temp->data>y)
        temp->left=delete(temp->left, y);
    else if(temp->data<y)
        temp->right=delete(temp->right, y);
    else
    {
        if(temp->left==NULL && temp->right==NULL)
        {
            free(temp);
            temp=NULL;
        }
        else if(temp->left==NULL)
            temp=temp->right;
        else if(temp->right==NULL)
            temp=temp->left;
        else
        {
            temp->data=min(temp->right)->data;
            temp->right=delete(temp->right, temp->data);
        }
    }
    return temp;
}

int main()
{
    int n, x, item, y=0;
    A.top=-1;
    while(1)
    {
        printf("\n\nEnter your choice.\n1.Insert\n2.Display\n3.Search\n4.Height of tree\n5.Delete\n6.Exit\n\n");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
            {
                printf("Enter the integer.\n");
                scanf("%d", &x);
                insert(x);
                break;
            }
            case 2:
            {
                printf("Preorder:\n");
                predisplay(root);
                printf("\nInorder:\n");
                indisplay(root);
                printf("\nPostorder:\n");
                postdisplay(root);
                printf("\nTraversal:\n");
                traverse();
                printf("\nLevel Order Traversal\n");
                levelorder();
                printf("\n");
                break;
            }
            case 3:
            {
                printf("Enter the integer to search.\n");
                scanf("%d", &item);
                if(search(item)!=NULL)
                    printf("Integer found!\n");
                else printf("Integer not found!\n");
                break;
            }
            case 4:
            {
                printf("The height of the tree is %d.\n", height(root));
                break;
            }
            case 5:
            {
                printf("Enter the element you want to delete.\n");
                scanf("%d", &y);
                if(search(y)==NULL)
                    printf("The element does not exist in tree.\n");
                else
                    delete(root, y);
                break;
            }
            case 6: exit(0);
            default: printf("Enter a valid choice.\n");
        }
    }
    return 0;
}
