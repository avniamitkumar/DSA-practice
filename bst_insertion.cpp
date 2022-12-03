#include <iostream>
#include <stdio.h>
using namespace std;
struct node
{
	int data;
	struct node *lchild,*rchild;
}*root=NULL;


void Insert(int key)
{
	struct node *t=root;
	struct node *r,*p;
	if(root==NULL)
	{
		p=(struct node *)malloc(sizeof(struct node));
		p->data=key;
		p->lchild=p->rchild=NULL;
		root=p;
		return;
	}
	while(t!=NULL)
	{
		r=t;
		if(key<t->data)
		{
			t=t->lchild;
		}
		else if(key>t->data)
		{
		t=t->rchild;
		}
		else
		{
			return;
		}

	}
	p=(struct node *)malloc(sizeof(struct node));
		p->data=key;
		p->lchild=p->rchild=NULL;
	if(key<r->data){r->lchild=p;}
	if(key>r->data){r->rchild=p;}

}	
void inorder(struct node *p)
{
	if(p){
	inorder(p->lchild);
	cout<<p->data<<" ";
	inorder(p->rchild);
}}
struct node* search(int key)
{
	struct node* t=root;
	while(t!=NULL)
	{
		if(key==t->data)
		{
			return t;
		}
		else if(key<t->data)
		{
			t=t->lchild;
		}
		else
		{
			t=t->rchild;
		}
		
	}
	return NULL;
}


int main()
{
	struct node *temp;
	Insert(10);
	Insert(5);
	Insert(20);
	Insert(8);
	Insert(30);
	inorder(root);
	temp=search(2);
	if(temp!=NULL)
	{
		cout<<"element "<<temp->data<<" is found"<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
	}
	return 0;
}


