#include <iostream>
using namespace std;
//STACK CREATION
struct stack
{
    int size;
    int top;
    int *s;
};
typedef struct stack Stack;
//CREATE STACK
void create(Stack *st)
{
    cout<<"ENTER SIZE";
    cin>>st->size;
    st->top=-1;
    st->s=new int[st->size];
}
//DISPLAY
void display(Stack st)
{
    for(int i=st.top;i>=0;i--)
    {
        cout<<st.s[i]<<endl;;
    }
}

//PUSH
void push(Stack *st,int val)
{
    if(st->top!=st->size-1)
    {
        st->top++;
        st->s[st->top]=val;
    }
    else
    {
        cout<<"STACK OVERFLOW"<<endl;
    }
}

//POP
int pop(Stack* st)
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
//PEEK
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
  }
  return x;

}
//STACK TOP
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
//IS EMPTY
int isempty(Stack st)
{
    if(st.top==-1)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
//IS FULL
int isfull(Stack st)
{
    if(st.top==st.size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    Stack st;
    create(&st);

    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    //push(&st,60);
    //cout<<"POPPED OUT VALUE :"<<pop(&st)<<endl;
    //cout<<"POPPED OUT VALUE :"<<pop(&st)<<endl;
    //display(st);
    cout<<peek(st,1);

    return 0;
}
