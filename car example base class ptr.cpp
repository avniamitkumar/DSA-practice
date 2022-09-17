#include <iostream>

using namespace std;

class basi
{
    public:
    void fun1()
    {
        cout<<"car started"<<endl;
    }
};

class adv:public basi
{
    public:
    void play()
    {cout<<"play music"<<endl;}
};

int main()
{
   adv b;
   basi *o=&b;
   o->fun1();
   o->play();




    return 0;
}
