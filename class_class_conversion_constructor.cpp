
#include <iostream>
using namespace std;
class product
{
  private:
  int a,b;
  public:
  void set(int m,int n)
  {
      a=m;
      b=n;
  }
  int getm()
  {
      return a;
  }
  int getn()
  {
      return b;
  }
  
  
};
class item 
{
    private:
    int x,y;
    public:
    item()
    {
    }
    item(product p)
    {
        x=p.getm();
        y=p.getn();
    }
    void show()
    {
        cout<<"x :"<<x<<" y:"<<y<<endl;
    }
    
};



int main()
{
    
    item i1;
    product p1;
    
    p1.set(3,4);
    i1=p1;
    i1.show();
    return 0;
}