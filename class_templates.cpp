#include <iostream>
using namespace std;

template <class t>
class vec
{
  public:
  int size;
  t arr[1000000];
  vec(int m,t a[])
  {
      size=m;
     // arr=new t [size];
      for(int i=0;i<size;i++)
      {
          arr[i]=a[i];
      }
      
      
  }
  
 
  
  t operator*(vec &y)
  {
      t sum=0;
      for(int i=0;i<size;i++)
      {
          sum+=this->arr[i]*y.arr[i];
      }
      return sum;
  }
  
};

int main()

{
    float x[3]={1.1,2.2,3.3};
    float y[3]={4.4,5.5,6.6};
    vec <float > v1(3,x);
    vec <float> v2(3,y);
    //v1=x;
    //v2=y;
    float r=v1*v2;
    cout<<r<<endl;
}