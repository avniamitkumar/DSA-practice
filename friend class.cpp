#include <iostream>
using namespace std;
class ur;
class my
{
private:
    int a=10;
    friend ur;
};
class ur
{
public:
    my m;
    void fun()
    {
        cout<<m.a<<endl;
    }
};

int main()
{
    ur n;
    n.fun();

    return 0;
}
