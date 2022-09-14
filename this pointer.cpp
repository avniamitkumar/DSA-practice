#include <iostream>
using namespace std;
class rect
{
    int len;
    int bre;
public:
    //DEFAULT CONSTRUCTOR
     rect()
    {
        len=1;
        bre=1;
    }
    //PARAMETERISED CONSTRUCTOR
     rect(int l,int b)
    {
        setLen(l);
        setBre(b);
    }
    //COPY CONSTRUCTOR
    rect( rect &r1)
    {
        len=r1.len;
        bre=r1.bre;
            }

    void setLen(int len)
    {
        if(len>=0){
        this->len=len;}
        else{this->len=0;}
    }
    int getLen()
    {
        return len;
    }
    void setBre(int bre)
    {
        if(bre>=0)
        {
        this->bre=bre;
    }}
    int getBre()
    {
        return bre;
    }
    int area()
    {
        return len*bre;
    }
    int peri()
    {
        return 2*(len+bre);
    }

};


int main()
{

    rect r(10,5);
    rect r1(r);
    cout<<r1.area()<<endl;
    return 0;
}


