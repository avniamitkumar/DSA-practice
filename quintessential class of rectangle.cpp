#include <iostream>
using namespace std;
class rect
{
private:
    int len;
    int br;
public:
    rect();
    rect(int l,int b);
    rect(rect &r);
    int getl(){return len;}
    int getb(){return br;}
    void setl(int l);
    void setb(int b);
    int area();
    int peri();
    bool sq();
    ~rect();
};




int main()
{
    rect r1(10,10);
    cout<<"Area "<<r1.area()<<endl;
    if(r1.sq()){cout<<"Yes"<<endl;}



    return 0;
}
rect::rect()
{
    len=1;
    br=1;
}
rect::rect(int l,int b)
{
    setl(l);
    setb(b);
}
rect::rect(rect &r)
{
    len=r.len;
    br=r.br;
}
void rect::setl(int l)
{
    len=l;
}
void rect::setb(int b)
{
    br=b;
}
int rect::area()
{
    return len*br;
}
int rect::peri()
{
    return 2*(len+br);
}
bool rect::sq()
{
    if(len==br)
    {
        return true;
    }
    return false;
}
rect::~rect()
{
    cout<<"rectangle destroyed"<<endl;
}

