#include <iostream>
using namespace std;

class base{

public:
    int a;
    void display(){
    cout<<"DISPLAY OF BASE "<<a<<endl;
}};

class derived :public base
{
public:
    void show()
    {
        cout<<"DISPLAY OF DERIVED "<<endl;
    }

};

int main()
{/*
    base b;
    b.display();*/
    derived d;
    d.a=100;
    d.display();
    d.show();


    return 0;
}
