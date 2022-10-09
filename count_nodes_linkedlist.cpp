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

int node(struct node *p)
{
	if(p!=NULL)
	{
		return 1+node(p->next);
	}
	else {return 0;}
}


int main()
{
	int arr[]={12,23,45,21,34,21};
	int n=6;
	create(arr,n);
	cout<<nodesno(first)<<endl;
	cout<<node(first)<<endl;

	return 0;}