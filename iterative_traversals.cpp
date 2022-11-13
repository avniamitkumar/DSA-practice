#include <stdio.h>
#include <iostream>
#include <stack>
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

void pre(node *t)
{
	  stack<long int> stk;
    long int temp;
    while (p != nullptr || ! stk.empty()){
        if (p != nullptr){
            stk.emplace((long int)p);
            p = p->lchild;
        } else {
            temp = stk.top();
            stk.pop();
            if (temp > 0){
                stk.emplace(-temp);
                p = ((Node*)temp)->rchild;
            } else {
                cout << ((Node*)(-1 * temp))->data << ", " << flush;
                p = nullptr;
            }
        }
    }
    cout << endl;
}
void iterativeInorder(Node *p) {
    stack<Node*> stk;
    while (p != nullptr || ! stk.empty()){
        if (p != nullptr){
            stk.emplace(p);
            p = p->lchild;
        } else {
            p = stk.top();
            stk.pop();
            cout << p->data << ", " << flush;
            p = p->rchild;
        }
    }
    cout << endl;
}
 void Tree::iterativePostorder(Node *p) {
    stack<long int> stk;
    long int temp;
    while (p != nullptr || ! stk.empty()){
        if (p != nullptr){
            stk.emplace((long int)p);
            p = p->lchild;
        } else {
            temp = stk.top();
            stk.pop();
            if (temp > 0){
                stk.emplace(-temp);
                p = ((Node*)temp)->rchild;
            } else {
                cout << ((Node*)(-1 * temp))->data << ", " << flush;
                p = nullptr;
            }
        }
    }
    cout << endl;
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
	return 0;
}
