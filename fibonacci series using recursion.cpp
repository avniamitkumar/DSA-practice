#include <iostream>
using namespace std;
int fib(int n)
{
    //base case
    if(n==0 || n==1)
    {
        return n;
    }
    //recurrence relation
    return fib(n-1)+fib(n-2);
}
int fib1(int n)
{
    int a=0;
    int b=1;
    int c;
    for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int F[10];
int mfib(int n)
{
    //base case
    if(n<=1)
    {
        F[n]=n;
        return n;
    }
    //recurrence relation
    if(F[n-1]==-1)
    {
        F[n-1]=mfib(n-1);
    }
    if(F[n-2]==-1)
    {
        F[n-2]=mfib(n-2);
    }
    return F[n-1]+F[n-2];
}


int main()
{
    int n;
    cin>>n;
    for(int i=0;i<10;i++)
    {
        F[i]=-1;
    }
    cout<<fib(n)<<endl;
    cout<<fib1(n)<<endl;
    cout<<mfib(n)<<endl;
    return 0;
}
