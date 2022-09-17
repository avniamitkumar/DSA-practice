
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class base
{
    public:
    void show()
    {
        cout<<"base"<<endl;
    }
};
class deri:public base
{
    public:
    void show(int x)
    {
        cout<<"derive"<<endl;
    }
};

int main() {
    base b;
    deri d;
    b.show();
    d.base::show();
    d.show(0);
    return 0;
}
