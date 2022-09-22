#include <iostream>
#include <cstring>
using namespace std;
struct Stack
{
  int top;
  int size;
  int *e;
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
int pop(stack *st)
{
    int x=-1;
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
int eval(char *postfix)
{
    stack st;
    st.top=-1;
    st.size=strlen(postfix);
    st.e=new int[st.size];
    int i=0;int x1,x2,r;
    for(i=0;postfix[i]!='\0';i++)
    {
        if(isoperand(postfix[i]))
        {
            push(&st,postfix[i]-'0');
        }
        else
        {
            x1=pop(&st);
            x2=pop(&st);
            switch(postfix[i])
            {
            case '+':
                r=x1+x2;
                push(&st,r);
                break;

            case '-':
                r=x1-x2;
                push(&st,r);
                break;
            case '/':
                r=x1/x2;
                push(&st,r);
                break;
            case '*':
                r=x1*x2;
                push(&st,r);
                break;
        }
    }
    return pop(&st);
 }}

int main()
{
    char *postfix="234*82/-";
    cout<<eval(postfix)<<endl;


    return 0;}


