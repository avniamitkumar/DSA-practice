#include <iostream>
using namespace std;
class basic
{
public:
     virtual void start()
    {
        cout<<"BASIC CAR STARTED"<<endl;
    }
};
class advance:public basic
{
public:
    void start()
    {
        cout<<"advance car started"<<endl;
    }
};

int main()
{
    basic *b= new class advance();
    b->start();

    return 0;
}
