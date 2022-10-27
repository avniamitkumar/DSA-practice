#include <iostream>
using namespace std;
struct node
{
	struct node *prev;
	int data;
	struct node *next;
}*first=NULL;
void create(int arr[],int n)
{
	struct node *t,*last;
	int i;
	first=new struct node;
	first->data=arr[0];
	first->prev=first->next=NULL;
	last=first;
	for(i=1;i<n;i++)
	{
		t=new struct node;
		t->data=arr[i];
		t->next=last->next;
		t->prev=last;
		last->next=t;
		last=t;
	}

}
int length(struct node *p)
{
	int len=0;

	while(p)
	{
		len++;
		p=p->next;
	}
	return len;
}
void insert(struct node *p,int ind,int x)
{
	struct node *t;
	int i;
	if(ind<0 || ind>length(p))
	{
		return;
	}
	if(ind==0)
	{
		t=new struct node;
		
		t->data=x;
		t->prev=NULL;
		t->next=first;
		first->prev=t;

	}
	else
	{
		for(int i=0;i<ind-1;i++)
		{
			p=p->next;
		}
		t=new struct node;
		t->data=x;
		t->prev=p;
		t->next=p->next;
		if(p->next)p->next->prev=t;
		p->next=t;
	}

}
int del(struct node *p,int ind)
{
	struct node *q;
	int x=-1,i;
	if(ind<1 || ind>length(p))
	{
		return -1;
	}

	if(ind==1)
	{
		first=first->next;
		if(first)first->prev=NULL;

		x=p->data;

		delete p;
	}
	else
	{
		for(int i=0;i<ind-1;i++)
		{
			p=p->next;
		}
		p->prev->next=p->next;
		if(p->next)
		{
			p->next->prev=p->prev;
		}
		x=p->data;
		//eturn x;
		delete p;
	}
	return x;
}

void Display(struct node *p)
{
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}
void reverse(struct node *p)
{
	struct node *temp;
	while(p)
	{
		temp=p->next;
		p->next=p->prev;
		p->prev=temp;
		p=p->prev;
		if( p!=NULL && p->next==NULL)
		{
			first=p;
		}

	}
}



int main()
{
	int arr[]={10,20,30,40,50};
	create(arr,5);
	cout<<"length is "<<length(first)<<endl;
	Display(first);
	insert(first,5,60);
	Display(first);
	cout<<del(first,3)<<endl;;
	Display(first);
	reverse(first);
	Display(first);

	return 0;
}