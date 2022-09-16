#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"DEFAULT OF BASE"<<endl;
    }
    base(int x)
    {
        cout<<"PARAM OF X "<<x<<endl;
    }
};

class derived:public base
{
public:
    derived()
    {
        cout<<"DEFAULT OF DERIVED"<<endl;
    }
    derived(int m)
    {
        cout<<"PARAM OF DERIVED"<<m<<endl;
    }
    derived(int x,int m):base(x)
    {
        cout<<"PARAM OF DERIVED"<<m<<endl;
    }

};

int main()
{
    derived d(10);
    return 0;
}
