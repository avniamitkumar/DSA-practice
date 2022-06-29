#include<iostream>
#include<stdio.h>
using namespace std;
class rectangle
{
private:
    int len;
    int bre;
public:
    void initialise(int l,int b)
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
};
int main()
{
    rectangle r;
    int l,b;
    cout<<"ENTER LENGTH AND BREADTH";
    cin>>l>>b;
    r.initialise(l,b);
    int a=r.area();
    int p=r.peri();
    cout<<a<<endl<<p;
    return 0;
}
