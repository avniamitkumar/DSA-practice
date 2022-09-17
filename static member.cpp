#include <iostream>>
using namespace std;

class test
{
private:
    int a;
    int b;
public:
    static int cnt;
    test()
    {
        a=10;
        b=10;
        cnt++;
    }
    static int get()
    {
        //a++;
        return cnt;
    }
};
int test::cnt=0;
int main()
{
    test t1;
    //cout<<t1.cnt<<endl;
    test t2;
    ////cout<<t2.cnt<<endl;
    //cout<<t1.cnt<<endl;
    //t2.cnt=25;
    //cout<<t1.cnt<<endl;
    cout<<test::get()<<endl;
    return 0;
}
