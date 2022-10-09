#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;	
}*first=NULL;
void create(int arr[],int n)
{
	struct node*temp,*last;
	first=new node;
	first->data=arr[0];
	first->next=NULL;
	last=first;
	for(int i=1;i<n;i++)
	{
		temp=new node;
		temp->data=arr[i];
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}
//NORMAL DISPLAY
void display(struct node *p)
{
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}
//RECURSIVE DISPLAY WHILE ASCENDING
void display1(struct node *p)
{
	if(p!=NULL)
	{
		cout<<p->data<<" ";
		display1(p->next);
	}
}
//RECURSIVE DISPLAY IN REVERSE
void display2(struct node *p)
{
	if(p!=NULL)
	{
		display2(p->next);
		cout<<p->data<<" ";
	}
}

int main()
{
	int arr[]={3,5,6,15,21};
	int n=5;
	create(arr,n);
	cout<<"normal display "<<endl;
	display(first);
	cout<<"using recursion ascending"<<endl;
	display1(first);
	cout<<"using recursion reverse"<<endl;
	display2(first);

	return 0;
}