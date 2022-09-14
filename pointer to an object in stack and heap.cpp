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
    //IN STACK
    rect r1;
    rect *p;
    p=&r1;
    p->len=10;
    p->bre=10;
    cout<<p->area()<<endl;
    //IN HEAP
    rect *m;
    m=new rect;
     m->len=10;
    m->bre=10;
    cout<<m->area()<<endl;
    rect *q=new rect;


    return 0;
}

