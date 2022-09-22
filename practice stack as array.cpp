#include <iostream>
using namespace std;
struct stack
{
  int top;
  int size;
  int *s;
};
typedef struct stack Stack;


void push(Stack *st,int val)
{
    if(st->top==st->size-1)
    {
      cout<<"STACK IVERFLOW"<<endl;
    }
    else
    {
        st->top++;
        st->s[st->top]=val;
    }
}
int pop(Stack *st)
{
    int x=-1;
    if(st->top==-1)
    {
        cout<<"STACK UNDERFLOW"<<endl;
    }
    else
    {
        x=st->s[st->top];
        st->top--;
    }
    return x;
}
int peek(Stack st,int ind)
{
    int x=-1;
    if(st.top-ind+1<0)
    {
        cout<<"INVALID POSITION"<<endl;
    }
    else
    {
        x=st.s[st.top-ind+1];
        return x;
    }
}

int stacktop(Stack st)
{
    if(st.top==-1)
    {
        return -1;
    }
    else
    {
        return st.s[st.top];
    }
}

int is(stack st)
{
    if(st.top==-1)
    {
        return 1; }
    return 0;
}

int isfull(stack st)
{
    if(st.top==st.size-1)
    {return 1;}
    else
    {
        return 0;
    }
}
void display(Stack st)
{
    for(int i=st.top;i>=0;i--)
    {
        cout<<st.s[i]<<endl;;
    }
}


int main() {
    Stack s;
    cout<<"size"<<endl;
    cin>>s.size;
    s.top=-1;
    s.s=new int[s.size];
    push(&s,10);
    push(&s,20);
    push(&s,30);
    push(&s,40);
    push(&s,50);
    cout<<"popped out element"<<pop(&s)<<endl;
    cout<<"popped out element"<<pop(&s)<<endl;
    cout<<"popped out element"<<pop(&s)<<endl;

    display(s);




    return 0;
}
