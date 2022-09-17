#include <iostream>
using namespace std;
class car
{
public:
    virtual void start()=0;
    virtual void stop()=0;
};
class innova:public car
{
public:
    void start()
    {
        cout<<"INNOVA STARTED"<<endl;
    }
    void stop()
    {
        cout<<"INNOVA STOPPED"<<endl;
    }
};
class swift:public car
{
public:
    void start()
    {
        cout<<"swift STARTED"<<endl;
    }
    void stop()
    {
        cout<<"swift STOPPED"<<endl;
    }
};
int main()
{
    car *c=new innova;
    c->start();
    c->stop();
    return 0;
}
