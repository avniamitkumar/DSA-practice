#include <iostream>
using namespace std;

void swap(int *x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    }

int main()
{
    int a=12,b=22;
    cout<<"before"<<endl;
    cout<<a<<'\t'<<b<<endl;
    swap(&a,&b);
    cout<<"after"<<endl;
    cout<<a<<'\t'<<b<<endl;

    return 0;
}
