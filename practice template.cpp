#include <iostream>
using namespace std;
template <class T>
class arith
{
private:
    T a;
    T b;
public:
    arith(T a,T b);
    T sub();
    T add();};

template <class T>
arith<T>::arith(T a,T b)
    {
        this->a=a;
        this->b=b;
    }
    template <class T>
    T arith<T>::add()
    {
        T c;
        c=a+b;
        return c;
    }
    template <class T>
    T arith<T>::sub()
    {
        T c;
        c=a-b;
        return c;
    }
    ;


int main()
{
    arith<int> ar(10,5) ;
    arith<float>ar2(1.5,7);
    arith<char> ar3('A','B');
    cout<<"sum "<<ar.add()<<endl;
    cout<<"sub "<<ar.sub()<<endl;
    cout<<"sum "<<ar2.add()<<endl;
    cout<<"sub "<<ar2.sub()<<endl;
    //TYPEAST TO GET RESULTS
    cout<<"sum "<<(int)ar3.add()<<endl;
    cout<<"sub "<<(int)ar3.sub()<<endl;

    return 0;
}
