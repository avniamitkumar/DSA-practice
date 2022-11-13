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


void levelorder(struct node *p)
{
	struct queue q;
	create(&q,100);
	cout<<p->data<<" ";
	enqueue(&q,p);
	while(!isempty(q))
	{
		p=dequeue(&q);
		if(p->lchild)
		{
			cout<<p->lchild->data<<" ";
			enqueue(&q,p->lchild);
		}
		if(p->rchild)
		{
			cout<<p->rchild->data<<" ";
			enqueue(&q,p->rchild);
		}
	}

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
	cout<<endl<<"LEVEL ORDER"<<endl;
	levelorder(root);
	return 0;
}
