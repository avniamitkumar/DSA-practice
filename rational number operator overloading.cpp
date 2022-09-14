#include <iostream>
using namespace std;
class rat
{
private:
    int p,q;
public:
    rat(int p=0,int q=1)
    {
        this->p=p;
        this->q=q;
    }
    rat operator+ (rat r)
    {
        rat t;
        t.p=this->p*r.q+this->q*r.p;
        t.q=this->q*r.q;
        return t;
    }
    friend ostream &operator<<(ostream &out,rat &r);
};
ostream &operator<<(ostream &out,rat &r)
{
    out<<r.p<<"/"<<r.q<<endl;
    return out;
}


int main()
{
    rat r1(3,4),r2(4,5),r3;
    r3=r1+r2;
    cout<<r3;

    return 0;
}
