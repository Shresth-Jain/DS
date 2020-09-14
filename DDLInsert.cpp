#include<iostream>
using namespace std;
struct node
{
	struct node* prev;
	int data;
	struct node* next;
};
struct node* start=NULL;

void insert()
{
	int key;
	struct node* a;
	a=(struct node*)malloc(sizeof(struct node));
	cout<<"\nEnter the value of data.\t";
	cin>>key;
	a->data=key;
	a->next=NULL;
	if(start==NULL)
	{
		start=a;
		a->prev=NULL;
	}
	else
	{
		struct node* tmp;
		tmp=start;
		while(tmp->next!=NULL)
		{
			tmp=tmp->next;
		}
		a->prev=tmp;
		tmp->next=a;
	}
}
void display()
{
	if(start==NULL)
	{
		cout<<"EMPTY";
		return;
	}
	else
	{
		cout<<"\nThe data in R to L is :";
		struct node* tmp;
		tmp=start;
		while(tmp->next!=NULL)
		{
			tmp=tmp->next;
		}
		while(tmp->prev!=NULL)
		{
			cout<<tmp->data<<' ';
			tmp=tmp->prev;
		}
	}
}
int main()
{
	int ch;
	do
	{
		cout<<"\n*********************************";
		cout<<"\nEnter 1 to Insert and 2 to display.";
		cout<<"\nPress 0 to exit .";
		cin>>ch;
		switch(ch)
		{
			case 1:insert();break;
			case 2:display();break;
			case 0:exit(0);break;
			default:cout<<"Invalid choice";
		}	
	}while(ch!=0);
}

