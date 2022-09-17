#include <iostream>
using namespace std;

class shape
{
public:
    virtual float area()=0;
    virtual float peri()=0;
};

class rect:public shape
{
private:
    int len;
    int bre;
public:
    rect(int l=0,int b=0)
    {
        len=l;
        bre=b;
    }

    float area()
    {
        return len*bre;
    }
    float peri()
    {
        return 2*(len+bre);
    }
};

class circle:public shape
{
private:
    int r;
public:
    circle(int re=0)
    {
        r=re;
    }
    float area()
    {
        return 3.14*r*r;
    }
    float peri()
    {
        return 2*3.14*r;
    }
};

int main()
{
    shape *s=new rect(10,5);
    cout<<"Area of Rectangle "<<s->area()<<endl;
    cout<<"Perimeter of Rectangle "<<s->peri()<<endl;
    s=new circle(10);
    cout<<"Area of Circle "<<s->area()<<endl;
    cout<<"Perimeter of Circle "<<s->peri()<<endl;

    return 0;
}
