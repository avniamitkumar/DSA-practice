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

int isbalance(char *exp)
{
    stack st;
    st.top=-1;
    st.size=strlen(exp);
    st.e=new char[st.size];
     for(int i=0;exp[i]!='\0';i++)
     {
         if(exp[i]=='(')
         {
             push(&st,exp[i]);
         }
         if(exp[i]==')')
         {
             if(isempty(st)==0){
             pop(&st);}
             else
             {
                 return false;
             }
         }

     }

    return isempty(st)?true:false;



}


int main()
{
    char exp[1000000];
    cin>>exp;
    cout<<isbalance(exp)<<endl;


    return 0;}
