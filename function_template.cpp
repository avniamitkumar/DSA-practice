#include <iostream>
using namespace std;
template <class t>
void swapp(t &a, t &b)
{
    cout<<a<<" and "<<b<<endl;
    
    t temp=a;
    a=b;
    b=temp;
    cout<<a<<" and "<<b<<endl;
}

int main()
{
    int a=100;
    int b=102;
    swapp(a,b);
   // cout<<a<<" "<<b<<endl;
    return 0;
}
