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

class cuboid :public rect
{
private:
    int he;
public:
    cuboid(int h)
    {
        he=h;
    }

    cuboid(int l,int h,int b)
    {
        he=h;
        setl(l);
        setb(b);
    }
    int volume();
    int geth();
    void seth(int h);
};
cuboid::volume()
{
    return getl()*getb()*he;
}
int cuboid::geth()
{
    return he;
}
void cuboid::seth(int h)
{
    he=h;
}

int main()
{
   /* rect r1(10,10);
    cout<<"Area "<<r1.area()<<endl;
    if(r1.sq()){cout<<"Yes"<<endl;}*/
    cuboid c(5);
    c.setl(10);
    c.setb(7);
    cout<<c.volume()<<endl;;



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


