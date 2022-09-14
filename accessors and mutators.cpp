#include <iostream>
using namespace std;
class rect
{
    int len;
    int bre;
public:
    void setLen(int l)
    {
        if(l>=0){
        len=l;}
        else{len=0;}
    }
    int getLen()
    {
        return len;
    }
    void setBre(int b)
    {
        bre=b;
    }
    int getBre()
    {
        return bre;
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
    int l,b;
    cin>>l>>b;
    rect r;
    r.setLen(l);
    r.setBre(b);
    cout<<" length is "<<r.getLen()<<endl;
    cout<<" breadth is "<<r.getBre()<<endl;
    cout<<" area is "<<r.area()<<endl;
    cout<<" perimeter is "<<r.peri()<<endl;

    return 0;
}

