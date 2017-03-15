#include <stdio.h>
#include<stdlib.h>
typedef struct linklist
{
    int val;
    struct linklist *next;
}node;
node *head=NULL;
node *last=NULL;
void insert(int n)
{
    node *temp=(node *)malloc(sizeof(node));
    temp->val=n;
    if(head==NULL)
    {
        head=last=temp;
        temp->next=NULL;
    }
    else
    {
        last->next=temp;
        temp->next=NULL;
        last=temp;
    }
}
int search(int f)
{
    int i=0;
    node *temp;
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        for(temp=head;temp!=last;temp=temp->next)
        {
            if(temp->val==f)
            {
               if(temp->next!=NULL)
               {
                   temp=temp->next;
                   i=temp->val;
               }
            }
        }
    }
    return i;
    
}
void main()
{
    int i,j,n,m,f;
    printf("enter the size of list\n");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&n);
        insert(n);
    }
    printf("enter the element to be searched\n");
    scanf("%d",&f);
    j=search(f);
    if(j>0)
    {
        printf("the next data is %d\n",j);
    }
    else
    {
        printf("the element is not present or it is the last element of the list");
    }
}
