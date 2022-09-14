#include <iostream>
using namespace std;
class rect
{
    public:
    int len;
    int bre;

    int area()
    {
        return len*bre;
    }
    int peri()
    {
        return 2*(len+bre);
    }

};


int main()
{
    rect r1,r2;
    r1.len=50;
    r1.bre=10;
    cout<<r1.area()<<endl;
    cout<<r1.peri()<<endl;
    r2.len=15;
    r2.bre=10;
    cout<<r2.area()<<endl;
    return 0;
}
