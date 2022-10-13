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

int main()
{
	int arr[5]={10,20,30,40,50};
	create(arr,5);
	display(first); 
	insert(first,1,1);
	display(first);
	cout<<deete(first,3)<<endl;
	display(first);
	return 0;
}