#include <iostream>
using namespace std;
class demo
{
public:
    demo()
    {
        cout<<"CONSTRUCTOR OF DEMO"<<endl;
    }
    ~demo()
    {
        cout<<"DESRUCTOR OF DEMO"<<endl;
    }

};
 void fun()
    {
      demo *d=new demo;
      delete d;
    }

int main()
{
    fun();
}
