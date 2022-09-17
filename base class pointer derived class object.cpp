#include <iostream>

using namespace std;

class base
{public:
    void fun1()
    {
        cout<<"FUNCTION 1"<<endl;;
    }
};
class derived:public base
{
 public:
    void fun2()
    {
        cout<<"fun 2 of derived"<<endl;
    }
};

int main()
{
    //BASE CLASS POINTER DERIVED CLASS OBJWECT
    /*derived d;
    base *ptr=&d;
    ptr->fun1();*/
    //ptr->fun2();



    base d;
    derived *ptr=&d;
    ptr->fun1();
    //ptr->fun2();
    return 0;
}
