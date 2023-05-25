#include<bits/stdc++.h>
using namespace std;

struct node {
	int data;
	struct node *link;
};
void fun(struct node *ptr,int data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;

    cout<<"Successfully Inserted "<<data<<" at the end of SLL."<<endl;
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


    int data=30;
    fun(head,data);

}

