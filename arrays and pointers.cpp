#include<iostream>
using namespace std;
int main()
{
    int a[5]={0,1,2,3,4};
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(a+i)<<" ";
    }
}
