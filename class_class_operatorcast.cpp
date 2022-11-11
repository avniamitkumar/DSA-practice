
#include <iostream>
using namespace std;

class item 
{
    private:
    int x,y;
    public:
    item()
    {
    }
    void setx(int x)
    {
        this->x=x;
    }
    void sety(int y)
    {
        this->y=y;
    }
    
    void show()
    {
        cout<<"x :"<<x<<" y:"<<y<<endl;
    }
    
};


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
  operator item()
  {
      item temp;
      temp.setx(a);
      temp.sety(b);
      return temp;
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