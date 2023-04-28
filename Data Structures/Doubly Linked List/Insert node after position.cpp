
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


///Insert at End
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



///Insertion Between The Nodes

void AddAfterPos(struct node *head,int data,int pos)
{
    ///Creating New Node
    struct node *newnode=CreateHead(newnode,data);

    struct node *temp1=head,*temp2;
    while(pos!=1)
    {
        temp1=temp1->next;
        pos--;
    }
    temp2=temp1->next;

    if(temp2==NULL) ///Last Node
    {
        temp1->next=newnode;
        newnode->prev=temp1;
    }
    else
    {
    temp1->next=newnode;
    temp2->prev=newnode;
    newnode->prev=temp1;
    newnode->next=temp2;
    }


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


    ///Inserting New Node At The End

    AddAtEnd(head,55);

    AddAtEnd(head,65);

    AddAtEnd(head,75);

    AddAtEnd(head,85);


    ///Insertion Between The Nodes

    int pos=3;
    AddAfterPos(head,500,pos);

    ///Traversing The Doubly Linked List

    Traversing(head);


}
