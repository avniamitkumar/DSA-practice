#include <iostream>
using namespace std;
class rectangle
{
private:
    int len;
    int bre;
public:
    rectangle()
    {
        len=0;
        bre=0;
    }
    rectangle(int l, int b)
    {
        len=l;
        bre=b;

    }
    int area()
    {
        return len*bre;
    }
    int peri()
    {
        return 2*(len+bre);
    }
    void setlen(int l)
    {
        len=l;
    }
    void setbre(int b)
    {
        bre=b;
    }
    int getlen()
    {
        return len;
    }
    ~rectangle()
    {
        cout<<"destructor"<<endl;
    }
};
int main()
{
     rectangle r(10,5);
     cout<<"area"<<r.area()<<endl;
     cout<<"perimeter"<<r.peri()<<endl;
    return 0;
}
