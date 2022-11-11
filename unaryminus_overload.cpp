// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class space
{
    int x;
    int y;
    int z;
    public:
    void getdata(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display()
    {
        cout<<"x "<<x<<endl;
        cout<<"y "<<y<<endl;
        cout<<"z "<<z<<endl;
    }
    /*void operator -()
    {
        x=-x;
        y=-y;
        z=-z;
    }*/
    friend void operator-(space &s);
};
void operator-(space &s)
{
    s.x=-s.x;
    s.y=-s.y;
    s.z=-s.z;
}


int main() {
   space s;
   s.getdata(10,-20,30);
   cout<<"s :"<<endl;
   s.display();
   -s;
    cout<<"-s :"<<endl;
   s.display();

    return 0;
}