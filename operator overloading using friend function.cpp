#include<iostream>
using namespace std;
class cmplx
{
private:
    int real;
    int img;
public:
    cmplx(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<real<<" + i"<<img;
    }
    friend cmplx operator+(cmplx c1,cmplx c2);
};
cmplx operator+(cmplx c1,cmplx c2)
{
    cmplx t;
    t.real=c1.real+c2.real;
    t.img=c1.img+c2.img;
    return t;
}



int main()
{
    cmplx c1(10,5),c2(5,10),c3;
    c3=c1+c2;
    c3.display();


    return 0;
}
