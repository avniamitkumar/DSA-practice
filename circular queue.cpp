#include <stdio.h>
#include <iostream>
using namespace std;
struct Queue
{
    int rear;
    int front;
    int size;
    int *a;
};
typedef struct Queue queue;
void create(queue *q,int s)
{
    q->rear=q->front=0;
    q->size=s;
    q->a=new int [q->size];
}


void enqueue(queue *q,int ind)
{
    if((q->rear+1)%q->size==q->front)
    {
        cout<<"QUEUE OVERFLOW"<<endl;
    }
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->a[q->rear]=ind;
    }
}
int dequeue(queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    {
        cout<<"QUEUE IS EMPTY"<<endl;
    }
    else
    {
        q->front=(q->front+1)%q->size ;
        x=q->a[q->front];
    }
    return x;
}
void display(queue q)
{
    int i=q.front+1;
    do
    {
        cout<<q.a[i]<<" ";
        i=(i+1)%q.size;
    }
    while
    (
        i!=(q.rear+1)%q.size);
        cout<<endl;
}

int main()
{
    queue q;
    create(&q,5);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,50);
    enqueue(&q,60);
    enqueue(&q,70);
    display(q);
    cout<<"deleted element is : "<<dequeue(&q)<<endl;
    cout<<"deleted element is : "<<dequeue(&q)<<endl;
    display(q);
    return 0;
}

