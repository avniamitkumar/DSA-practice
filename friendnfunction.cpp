#include <iostream>
using namespace std;
//FRIEND FUNCTION
class test
{
    private:int a;
    protected:int b;
    public:
        int c;
        friend void fun();
};
void fun()
{
    test t;
    t.a=10;
    t.b=5;
    t.c=15;
}

int main()
{


    return 0;

}
