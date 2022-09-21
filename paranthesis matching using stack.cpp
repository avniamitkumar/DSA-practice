#include <iostream>
#include <stdlib.h>
using namespace std;
struct stack
{
    int size;
    int top;
    char *exp;
};
typedef struct stack Stack;
void push(Stack *st,char val)
{
    if(st->top==st->size-1)
    {
        cout<<"STACK OVERFLOW";
    }

    else{
        st->top++;
        st->exp[st->top]=val;
    }
}
//POP
char pop(Stack *st)
{
    char x=-1;
    if(st->top==-1)
    {
        cout<<"STACK UNDERFLOW"<<endl;
    }
    else
    { x=st->exp[st->top];
        st->top--;
    }

return x;
}
int  isempty(Stack st)
{
    if(st.top==-1)
    {
        return 1;
    }
    else{return 0;}
}
int isbalance(char *ex)
{
    //CREATING STACK
    Stack st;
    st.top=-1;
    st.exp=new char[st.size];
    //CHECKING STACK
    for(int i=0;ex[i]!='\0';i++)
    {
        if(ex[i]=='(')
        {
            push(&st,ex[i]);
        }
        else if(ex[i]==')')
        {
            if(isempty(st)==-1)
            {
                return false;
            }
            pop(&st);
        }
    }
    return (isempty(st)?true:false);

}
int main()
{
    char ex[10000];
    cin>>ex;
    cout<<isbalance(ex);
    return 0;
}
