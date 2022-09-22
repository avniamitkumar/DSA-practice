#include <iostream>
#include <cstring>
using namespace std;
struct Stack
{
  int top;
  int size;
  char *e;
};
typedef struct Stack stack;
void push(stack *st,char exp)
{
    if(st->top==st->size-1)
    {
        cout<<"STACK OVERFLOW";
    }
    else
    {
        st->top++;
        st->e[st->top]=exp;
    }
    }
char pop(stack *st)
{
    char x=-1;
    if(st->top==-1)
    {
        cout<<"STACK UNDERFLOW"<<endl;;
    }
    else
    {
        st->e[st->top]=x;
        st->top--;

    }
    return x;
}
int isempty(stack st)
{
    if(st.top==-1)
    {return 1;
    }
    return 0;
}
int isoperand(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='/')
    {
        return 0;
    }
    return 1;
}
int pre(char x)
{
    if(x=='+'||x=='-')
    {
        return 1;
    }
    else if(x=='*'||x=='/')
    {
        return 2;
    }
    return 0;
}
char* convert(char *infix)
{
    stack st;
    st.top=-1;
    st.size=strlen(infix);
    int i=0,j=0;
    char *postfix=new char [strlen(infix)+2];
    while(infix[i]!='\0')
    {
        if(isoperand(infix[i])==1)
        {
            postfix[j++]=infix[i++];
        }
        else
        {
            if(pre(infix[i])>pre(st.e[st.top]))
            {
                push(&st,infix[i++]);
            }
            else{

            postfix[j++]=pop(&st);
        }
    }
    while(!isempty(st))
    {
        postfix[j++]=pop(&st);
    }
    postfix[j]='\0';
    return postfix;

}
}


int main()
{
    char *infix="a+b*c";
    //push('#');
    char *postfix=convert(infix);
    cout<<postfix<<endl;




    return 0;}

