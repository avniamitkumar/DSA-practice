#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"CONSTRUCTOR OF BASE"<<endl;
    }
    ~base()
    {
        cout<<"DESTRUCTOR OF BASE"<<endl;
    }

};
void fun1()
{
    base *b=new derived();
    delete b;
}
class derived:public base
{
    public:
        derived()
        {
            cout<<"CONSTRUCTOR OF DERIVED"<<endl;
        }
        ~derived()
        {
            cout<<"DESTRUCTOR OF DERIVED"<<endl;
        }

};
void fun()
{
derived d;
}


int main()
{
    fun();


    return 0;
}
