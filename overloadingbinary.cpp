#include <iostream>
using namespace std;

class complex
{
    float x;
    float y;
    public:
    complex(float a=0,float b=0)
    {
        x=a;
        y=b;
    }
     friend complex operator+(complex,complex);
     //complex operator+(complex);
    void display()
    {
        cout<<x<<" + j "<<y<<endl;
    }
    
};
/*complex complex:: operator+(complex c)
{
    complex temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return temp;
}*/
complex operator+(complex c1,complex c2)
{
    return complex((c1.x+c2.x),(c1.y+c2.y));
}
int main()
{
    complex c1(2.5,3.5),c2,c3;
    c2=complex(1.5,1.7);
    c3=2+c2;
    c1.display();
    c2.display();
    c3.display();
    
    return 0;
}