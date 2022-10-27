#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node* next;
}*first;
void create(int arr[],int n)
{
	int i;
	first=new struct node;
	struct node *temp,*last;
	first->data=arr[0];
	first->next=first;
	last=first;
	for( i=1;i<n;i++)
	{
		temp=new struct node;
		temp->data=arr[i];
		temp->next=last->next;
		last->next=temp;
		last=temp;

	}
}

void Display(struct node *h)
{
	do
	{
		cout<<h->data<<" ";
		h=h->next;
	}while(h!=first);
	cout<<endl;
}
void Rdisplay(struct node *h)
{
	static int flag=0;
	if(h!=first || flag ==0)
	{
		flag=1;
		cout<<h->data<<" ";
		Rdisplay(h->next);
	}
	flag=0;
}
int length(struct node *p)
{
	int len=0;
	do
	{
		len++;
		p=p->next;
	}while(p!=first);
	return len;
}

void insert(struct node *p,int pos,int x)
{
	struct node*t;
	int i;
	if(pos<0 || pos>length(p))
	{
		return;
	}
if(pos==0)
{
	t=new struct node;
	t->data=x;
	if(first==NULL)
	{
		first=t;
		first->next=first;
	}
	else
	{
		while(p->next!=first)
		{p=p->next;}
			p->next=t;
			t->next=first;
			first=t;
		
	}


}
else
{
	p=first;
	for(int i=0;i<pos-1;i++)
	{
		p=p->next;
	}
	t=new struct node;
	t->data=x;
	t->next=p->next;
	p->next=t;
}

}

int main()
{
	int arr[5]={12,34,56,78,22};
	create(arr,5);
	Display(first);
	Rdisplay(first);
	cout<<endl<<"length of linked list is "<<length(first)<<endl;
	insert(first,0,1);
	Display(first);
	cout<<endl<<"length of linked list is "<<length(first)<<endl;
	insert(first,2,14);
	Display(first);
	cout<<endl<<"length of linked list is "<<length(first)<<endl;

	return 0;
}