
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

///Deleting the last node

void del_last(struct node *head)
{
        if(head==NULL)cout<<"The Linked List is Empty!"<<endl;
        else if(head->link==NULL)
        {
            free(head);
            head=NULL;
        }
        else
        {

            struct node *temp=head; ///2nd Last Node
            while(temp->link->link!=NULL)
            {
                temp=temp->link;
            }
            free(temp->link);
            temp->link=NULL;
        }
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



    ///Deleting the last node
    del_last(head);


    print(head);



}



