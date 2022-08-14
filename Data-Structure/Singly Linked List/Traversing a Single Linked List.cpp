#include<bits/stdc++.h>
using namespace std;

struct node {
	int data;
	struct node *link;
};
void fun(struct node *ptr)
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
int main()
{

    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=(struct node *)malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;

    head->link=current;

    current=(struct node *)malloc(sizeof(struct node));
    current->data=100;
    current->link=NULL;

    head->link->link=current;

    fun(head);
}
