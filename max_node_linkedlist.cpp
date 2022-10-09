#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*first;
void create(int arr[],int n)
{
	struct node *temp,*last;
	first =new node;
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
int nodesno(struct node *p)
{
	int cnt=0;
	while(p!=NULL)
	{
		cnt++;
		p=p->next;
	}
	return cnt;
}

int sumnodes(struct node *p)
{
	int cnt=0;
	while(p!=NULL)
	{
		cnt=cnt+p->data;
		p=p->next;
	}
	return cnt;
}
int maxnodes(struct node *p)
{
	int max=p->data;
	while(p!=NULL)
	{
		if(max<p->data)
		{
			max=p->data;
		}
		p=p->next;
	}
	return max;
}
int max(struct node *p)
{
	int x=0;
	if(p==0)
	{
		return INT_MIN;
	}
	else
	{
		x=max(p->next);
		if(x>p->data)
		{
			return x;
		}
		return p->data;
	}
}

int main()
{
	int arr[]={12,23,45,210,34,21};
	int n=6;
	create(arr,n);
	cout<<nodesno(first)<<endl;
	cout<<sumnodes(first)<<endl;
	cout<<"maximum element is "<<maxnodes(first)<<endl;
	//RECURSIVELY
	cout<<"maximum element is"<<max(first)<<endl;
	return 0;}