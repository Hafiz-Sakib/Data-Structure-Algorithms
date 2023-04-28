#include<bits/stdc++.h>
using namespace std;

struct node{

struct node *prev;
int data;
struct node *next;

};

///Creating Head
struct node *CreateHead(struct node *head,int data)
{
 struct node *temp=(struct node *)malloc(sizeof(struct node));
 temp->prev=NULL;
 temp->data=data;
 temp->next=NULL;
 head=temp;
 return head;

}


///Insering New Node

void AddAtEnd(struct node *head,int data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;

    while(head->next!=NULL)
    {
        head=head->next;
    }
    head->next=temp;
    temp->prev=head;
}


///Creating an Entire Linked List
struct node * CreateList(struct node *head)
{
 int n;
 cout<<"Enter the Number of Nodes : ";
 cin>>n;
 cout<<"Enter Data for Head : ";
 int data;
 cin>>data;
 head=CreateHead(head,data);
 for(int i=2;i<=n;i++)
 {
     cout<<"Enter data for "<<i<<"th node : ";
     cin>>data;
     AddAtEnd(head,data);
 }
 return head;
}


///Traversing A Doubly Linked List

void Traversing(struct node *head)
{
    while(head!=NULL)
    {

        cout<<head->data<<" ";
        head=head->next;
    }
}


int main()
{
    struct node *head=CreateList(head);

    cout<<"All data :"<<endl;
    Traversing(head);


}
