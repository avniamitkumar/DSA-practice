#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*first=NULL;
void create(int arr[],int n)
{
	struct node *temp,*last;
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

void insert(int pos,int x)
{
	struct node *t,*p;
	if(pos==0)
	{
		t=new node;
		t->data=x;
		t->next=first;
		first=t;
	}
	else if(pos>0)
	{
		p=first;
		for(int i=0;i<pos-1 && p;i++)
		{
			p=p->next;
			if(p)
			{
				t=new node;
				t->data=x;
				t->next=p->next;
				p->next=t;
			}
		}

	}
}
void display(struct node *p)
{
	while(p)
	{
	cout<<p->data<<" ";
	p=p->next;
	}
}

void sortedinsert(struct node *first,int x)
{
	struct node *p,*q,*t;
	p=first;
	q=NULL;
	while(p && p->data<x)
	{
		q=p;
		p=p->next;
	}
	t=new node;
	t->data=x;
	t->next=q->next;
	q->next=t;

}

int main()
{
	int arr[5]={10,20,30,40,50};
	create(arr,5);
	display(first);
	cout<<endl;
	//insert(0,12);
	sortedinsert(first,23);

	display(first);


	return 0;
}