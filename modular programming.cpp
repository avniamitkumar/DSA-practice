#include <iostream>
#include <stdio.h>
using namespace std;

int area(int len,int bre)
{
    return len*bre;
}

int peri(int len ,int bre)
{
    return 2*(len+bre);
}

int main()
{
    int len=0,bre=0;
    cout<<"enter length and breadth ";
    cin>>len>>bre;
    cout<<area(len,bre)<<endl;
    cout<<peri(len,bre)<<endl;;
    return 0;
}
