#include <iostream>
using namespace std;
int main()
{
    int ch;
    ch=cin.get();
    int sum=0;
    while(ch!='$')
    {
        sum++;
        ch=cin.get();
    }
    cout<<sum;

    return 0;
}
