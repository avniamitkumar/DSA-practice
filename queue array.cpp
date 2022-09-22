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
    q->rear=q->front=-1;
    q->size=s;
    q->a=new int [q->size];
}


void enqueue(queue *q,int ind)
{
    if(q->rear==q->size-1)
    {
        cout<<"QUEUE OVERFLOW"<<endl;
    }
    else
    {
        q->rear++;
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
        q->front++;
        x=q->a[q->front];
    }
    return x;
}
void display(queue q)
{
    for(int i=q.front+1;i<=q.rear;i++)
    {
        cout<<q.a[i]<<" ";
    }
    printf("\n");
}

int main()
{
    queue q;
    create(&q,5);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    display(q);
    cout<<"deleted element is : "<<dequeue(&q)<<endl;
    cout<<"deleted element is : "<<dequeue(&q)<<endl;
    display(q);
    return 0;
}
