#include <iostream>
using namespace std;
void update(int *a)
{
    *a=*a+1;
    cout<<"INSIDE FUNCTION "<<*a<<endl;
}

int main()
{
    int x;
    x=10;
    update(&x);
    cout<<"INSIDE MAIN " <<x<<endl;


    return 0;
}
