#include <iostream>
using namespace std;

int fun(int n){
    int badaans;
    int chotaans=fun(n-1);
    if(n==1)
    {
        return 1;
    }
    badaans=chotaans+n;

    return badaans;

}

int main()
{
    int n=3;
    cout<<fun(n);
    return 0;
}
