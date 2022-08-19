#include <iostream>
using namespace std;
int main()
{
    int a=5;
    int b=7;
    //BITWISE AND
    cout<<(a&b)<<endl;
    cout<<(8&5)<<endl;
    //BITWISE OR
    cout<<(7|5)<<endl;
    cout<<(14|2)<<endl;
    //BITWISE XOR
    cout<<(7^5)<<endl;
    cout<<(14^1)<<endl;
    //  left shift
    int x=1;
    cout<<"After left shift :: "<<(x<<3)<<endl;
    //RIGHT SHIFT
    int c=8;
    cout<<"After right shift :: "<<(c>>2)<<endl;



    return 0;
}
