#include <iostream>
using namespace std;
class omplex
{
private:
    int real;
    int img;
public:
    omplex(int r=0,int i=0)
    {
        real=r;
        img=i;
    };
    void display()
    {
        cout<<real<<"+i"<<img<<endl;
    }

    omplex operator +(omplex x)
    {
        omplex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
};

int main()
{
    omplex c1(3,7);
    omplex c2(5,4);
    omplex c3;
    c3=c1+c2;
    c3.display();

    return 0;
}
