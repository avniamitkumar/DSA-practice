#include <iostream>
#include <stdio.h>
using namespace std;
struct rect
{
    int len;
    int bre;
}  ;
void initialise(struct rect *r,int l,int b )
{
    r->len=l;
    r->bre=b;
}
int area(struct rect r)
{
    return r.len*r.bre;
}
int perimeter(struct rect r)
{
    return 2*(r.len+r.bre);
}
int main()
{
   rect r={0,0};
  // cout<<"ENTER LENGTH AND BREADTH"<<endl;
   //cin>>r.len>>r.bre;
    //USING INITIALISE FUNCTION
   int l,b;
   cin>>l>>b;
   initialise(&r,l,b);
   int a=area(r);
   int p=perimeter(r);

   cout<<a<<endl<<p;



    return 0;
}
