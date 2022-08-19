#include <iostream>
using namespace std;
int fact(int n)
{
    if(n==0){
        return 1;
    }
    else{
    int num=1;
    for(int i=1;i<=n;i++)
    {
        num=num*i;
    }

    return num;}
}

int ptt(int a,int b)
{
    int t;
    t=fact(a)/(fact(b)*fact(a-b));
    return t;
}
int main()
{
    int n;
    cin>>n;
    int row,col;

    for(row=0;row<n;row++)
    {
        for(col=0;col<=row;col++)
        {
            cout<<ptt(row,col)<<"   ";
        }
        cout<<endl;
    }

    return 0;
}
