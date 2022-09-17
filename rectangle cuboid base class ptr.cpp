#include <iostream>

using namespace std;

class rect
{
  public:
  void area()
  {cout<<"AREA OF RECATNGLE"<<endl;}
};

class cub:public rect
{
  public:
  void vol()
{
    cout<<"VOLUME OF CUBOID"<<endl;
}
};




int main()
{
    //BASE CLASS POINTER DERIVED OBJECT
    /*cub c;
    rect *p=&c;
    p->area();
    p->vol();*/

    //OTHER WAY
    rect r;
    cub *i=&r;
    i->vol();
    i->area();




    return 0;}
