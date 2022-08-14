
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

///1st Method Function
struct node *add_beg(struct node *head,int data)
{
 struct node *ptr=(struct node *) malloc(sizeof(struct node));
 ptr->data=data;
 ptr->link=head;

 head=ptr;
 return head;
}

///2nd Method Function

void add_beg_ref(struct node **head,int data)
{
        struct node *ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->link=*head;
        *head=ptr;
}
int main()
{

    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=head;
    current=fun(current,50);
    current=fun(current,500);
    current=fun(current,501);
    current=fun(current,502);


    //Inserting a node at the beganning of the Linked List


    ///1st Method Pass by Value
    int data=40;
    head=add_beg(head,data);

    ///2nd Method Pass by References
    int data2=30;
    add_beg_ref(&head,data2);


    print(head);



}


