#include<iostream>
using namespace std;
int fibt(int rc)
{
    int a=0;
    int b=1,c;
    int m=2;
    if(rc==1 or rc==0)
    {
        if(rc==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    while(m<=rc){
    c=a+b;
    a=b;
    b=c;
    m++;}
    return c;
}

int main()
{
    int n;
    cin>>n;
    int row,col,no=0;
    for(row=0;row<n;row++)
    {
        for(col=0;col<=row;col++)
        {
            cout<<fibt(no)<<"   ";
            no++;
        }

        cout<<endl;
    }

    return 0;
}

