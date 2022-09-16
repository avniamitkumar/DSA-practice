#include <iostream>
using namespace std;
class base
{
private:
    int a;
protected:
    int b;
public:
    int c;
    void funbase()
    {
        a=10;
        b=5;c=15;
    }
};
class derived:public base
{
    void funderived()
    {
//        a=10;
        b=5;
        c=15;
    }
};


int main()
{
    base b;   // b.a=10;
//        b.b=5;
  b.c=20

;
    return 0;
}
