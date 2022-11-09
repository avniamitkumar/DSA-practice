#include <iostream>
using namespace std;
template <class t1>
void display(t1 a)
{
    cout<<a<<endl;
}
void display(int x)
{
    cout<<"explicit display "<<x<<endl;
}

int main()
{
    display(12);
    display(34.2);
    
    return 0;}