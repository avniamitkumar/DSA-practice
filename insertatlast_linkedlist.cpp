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
void insertlast(struct node *p,int x)
{
	struct node *t,*last;
	t=new node;
	t->data=x;
	t->next=NULL;
	if(first==NULL)
	{
		first=last=t;
	}else{
	last->next=t;
	last=t;}

}


void display(struct node *p)
{
	while(p)
	{
	cout<<p->data<<" ";
	p=p->next;
	}
}

int main()
{
	//int arr[5]={2,3,4,5,21};
	//create(arr,5);
	//display(first);
	//cout<<endl;
	//insert(0,12);
	//display(first);
	insertlast(first,10);
	display(first);
	cout<<endl;
	insertlast(first,20);
	display(first);
	cout<<endl;
	insertlast(first,30);
	display(first);
	cout<<endl;
	insertlast(first,40);
	display(first);
	cout<<endl;
	insertlast(first,50);
	display(first);
	cout<<endl;

	return 0;
}