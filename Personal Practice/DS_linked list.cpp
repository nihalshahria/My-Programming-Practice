#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void insertathead(node **head,int data)
{
    node* newnode=(struct node*)
    malloc(sizeof(struct node));
    newnode-> next=(*head);
    newnode-> data=data;
    (*head)=newnode;
}
void insertafterposition(node* head,int pos,int data)
{
    int i=1;
    node*t=NULL;
    while(i<=pos)
    {
        t=head;
        head=head->next;
        ++i;
    }
    node* newnode =(struct node*)
    malloc(sizeof(struct node));
    newnode->next = t->next;
    newnode->data = data;
    t->next = newnode;
}
void insertattail(node* head,int data)
{
    while(head->next!=NULL)
    {
        head=head->next;
    }
    node* newnode= (struct node*)
    malloc(sizeof(struct node));
    newnode->data = data;
    newnode-> next=NULL;
    head->next=newnode;
}
void traverse(node*head)
{
    while(head!=NULL)
    {
        printf("%d ",head->next);
        head=head->next;
    }
}
void deletepos(node** head,int pos)
{
    int i=1;
    node* t=(*head);
    if(pos==1)
    {
        (*head)=t->next;
        return;
    }
    while(i<pos-1 && t!=NULL)
    {
        t=t->next;
        ++i;
    }
    t->next=t->next->next;
}


int main()
{
    struct node* head=NULL;
    insertathead(&head,5);
    insertathead(&head,6);
    insertafterposition(head,1,4);
    insertattail(head,7);
    insertafterposition(head,2,43);
    traverse(head);
    printf("\n");
    return 0;
}
