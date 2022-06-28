#include<iostream>
using namespace std;
struct rect
{
    int len;
    int bre;
};

struct rect *fun()
{
    struct rect *p=new rect;

    p->len=20;
    p->bre=40;
};
int main()
{
    struct rect *ptr=fun();
    cout<<"length"<<ptr->len<<endl<<"breadth"<<ptr->bre<<endl;

    return 0;
}
