
#include <iostream>
#include <conio.h>
using namespace std;
class cmplx 
{
  int x;
  int y;
  public:
  cmplx()
  {}
  cmplx(int k)
  {
      x=k;
      y=0;
  }
  void get(int a,int b)
  {
      x=a;
      y=b;
  }
  void show()
  {
      cout<<x<<" + i"<<y<<endl;
  }
};
int main()
{
    cmplx c1;
    int x=5;
    c1=x;
    c1.show();
    
    
    return 0;
}
