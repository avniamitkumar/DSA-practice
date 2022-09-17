#include <iostream>
using namespace std;

class base
{
public:
    virtual void fun()
    {
        cout<<"DISPLAY OF FUN 1"<<endl;
    }
};
class derived:public base
{
public:
    void fun()
    {
        cout<<"DISPLAY OF DERIVE"<<endl;
    }
};

int main()
{
    base *p=new derived();
    p->fun();

    return 0;
}
