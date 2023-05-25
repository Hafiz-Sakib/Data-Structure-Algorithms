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

struct node *AddAtBeg(struct node *head,int data)
{
 struct node *temp=(struct node *)malloc(sizeof(struct node));
 temp->data=data;
 temp->next=head;
 head->prev=temp;
 head=temp;
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
    ///Creating Head
    struct node *head=CreateHead(head,45);
    //cout<<head->data<<endl;

    ///Inserting New Node At The Beganning

    head=AddAtBeg(head,55);

    head=AddAtBeg(head,65);

    head=AddAtBeg(head,75);

    head=AddAtBeg(head,35);

    ///Traversing The Doubly Linked List
    Traversing(head);


}
