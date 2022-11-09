#include <iostream>
using namespace std;
template <class T1=int , class T2=int>
class test
{
  T1 a;
  T2 b;
  public:
  test(T1 a, T2 b)
  {
      this->a=a;
      this->b=b;
  }
  void show()
  {
     cout<<a<<" and "<<b<<endl; 
  }
};


int main()
{
    cout<<"INSTANTIATING THE CLASS TEMPLATES AS TEST1 WITH FLOAT AND INT DATA TUPES .. \n test1: ";
    test <int ,float> test1(1,23.123);
    test1.show();
    cout<<"INSTANTIATING THE CLASS TEMPLATES AS TEST1 WITH  INT AND CHAR DATA TUPES .. \n test1: ";
    test <int ,char> test2(100,'W');
    test2.show();
     test <>test3(12,23);
    test3.show();
    return 0;
}