#include <stdio.h>
#include <iostream>
using namespace std;
struct node
{
	struct node *lchild;
	int data;
	struct node *rchild;
}*root=NULL;

struct queue
{
	int size;
	int front;
	int rear;
	struct node **Q;
};
void create(struct queue *q,int size)
{
	q->size=size;
	q->front=q->rear=0;
	q->Q=(struct node **)malloc((q->size*sizeof(struct node *)));

}
void enqueue(struct queue *q,struct node *x)
{
	if((q->rear+1)%q->size==q->front)
	{
	cout<<"queue is full"<<endl;

	}
else
{
	q->rear=(q->rear+1)%q->size;
	q->Q[q->rear]=x;
}

}
struct node *dequeue(struct queue *q)
{
	struct node *x=NULL;
	if(q->front==q->rear)
	{
	cout<<"QUEUE IS EMPTY"<<endl;
	}
	else
	{
	q->front=(q->front +1)%q->size;
	x=q->Q[q->front];
	}
	return x;

}
int isempty(struct queue q)
{
	return q.front==q.rear;
}
void treecreate()
{
	struct node *p,*t;
	int x;struct queue q;
	create (&q,100);
	cout<<"ENTER THE VALUES"<<endl;
	cin>>x;
	root=(struct node *)malloc(sizeof(struct node));
	root->data=x;
	root->lchild=root->rchild=NULL;
	enqueue(&q,root);
	while(!isempty(q))
	{
		p=dequeue(&q);
		cout<<"ENTER LEFT CHILD OF "<<p->data<<endl;
		cin>>x;
		if(x!=-1)
		{
			t=(struct node *)malloc(sizeof(struct node));
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			enqueue(&q,t);
		}
		cout<<"ENTER RIGHT CHILD OF "<<p->data<<endl;
		cin>>x;
		if(x!=-1)
		{
			t=(struct node *)malloc(sizeof(struct node));
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			enqueue(&q,t);
		}
	}
}
void preorder(struct node *p)
{
		if(p)
		{
		cout<<p->data<<" ";
		preorder(p->lchild);
		preorder(p->rchild);
		}
}
void inorder(struct node *p)
{
	if(p)
	{
	inorder(p->lchild);
	cout<<p->data<<" ";
	inorder(p->rchild);
	}
}
void postorder(struct node *p)
{
	if(p)
	{
	postorder(p->lchild);
	postorder(p->rchild);
	cout<<p->data<<" ";
	}
}

int count(struct node *p)
{
	if(p)
	{
		return count(p->lchild)+count(p->rchild)+1;
	}
	return 0;

}


int height(struct node *p)
{
	int x=0,y=0;
	if(p==0)
	{
		return 0;
	}
	x=height(p->lchild);
	y=height(p->rchild);
	
	if(x>y)
		{return x+1;}
	else
		{return y+1;}
}




int main()
{
	treecreate();
	cout<<"PREORDER"<<endl;
	preorder(root);
	cout<<endl<<"POSTORDER"<<endl;
	postorder(root);
	cout<<endl<<"INORDER"<<endl;
	inorder(root);

	cout<<endl<<"NO OF NODES IN TREE IS"<<endl;
	cout<<count(root)<<endl;
	cout<<"HEIGHT OF TREE IS"<<endl;
	cout<<height(root)<<endl;
	return 0;
}