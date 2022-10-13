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
		temp= new node;
		
		temp->data=arr[i];
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}

void display(struct node *p)
{
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}

void insert(struct node *p,int pos,int x)
{
	struct node *t;
	if(pos==0)
	{
		t=new node;
		t->data=x;
		t->next=first;
		first=t;
	}
	else
	{
		//p=first;
		t=new node;
		for(int i=0;i<pos-1;i++)
		
			p=p->next;
		t->data=x;
		t->next=p->next;
		p->next=t;
			
		
	}
}

int deete(struct node *first,int pos)
{
	struct node* q, *p;
	int x=-1,i;
	if(pos==1)
	{
		x=first->data;
		p=first;
		first=first->next;
		delete p;
	}
	else
	{
		p=first;
		q=NULL;
		for(int i=0;i<pos;i++)
		{
		q=p;
		p=p->next;
		}
		if(p)
		{
			q->next=p->next;
			x=p->data;
			delete p;
		}
		//return x;
	}
		return x;
}
void removedup(struct node *first)
{
	struct node *p,*q;
	p=first;
	q=first->next;
	while(q)
	{
		if(p->data!=q->data)
		{
			p=q;
			q=q->next;
		}
		else
		{
			p->next=q->next;
			
		
			delete q;
			q=p->next;
		}

	}
}
int main()
{
	int arr[8]={10,20,20,20,30,40,40,50};
	create(arr,8);
	display(first); 
	removedup(first);
	display(first);
	
	return 0;
}