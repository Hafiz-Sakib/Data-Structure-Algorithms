
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *link;
};

struct node *fun(struct node *ptr,int data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    ptr->link=temp;

    return temp;
}



void print(struct node *ptr)
{
    int cnt=0;
    if(ptr==NULL)
    {
        cout<<"Linked List is Empty."<<endl;
        return;
    }
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        cnt++;
        ptr=ptr->link;
    }
    cout<<endl;
    cout<<"Total Element = "<<cnt<<endl;
    return;
}

///Deleting a particular positon

void del_pos(struct node **head,int pos)
{
    struct node *curr=*head;
    struct node *prev;
    while(pos!=1 && pos--)
    {
        prev=curr;
        curr=curr->link;
    }
    prev->link=curr->link;
    free(curr);
    curr=NULL;
}

int main()
{

    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=head;
    current=fun(current,50);
    current=fun(current,500);
    current=fun(current,511);
    current=fun(current,512);


    ///Deleting a node at a particular position

    int pos=4;
    del_pos(&head,pos);



    print(head);



}


