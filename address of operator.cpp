#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int arr[4]={1,2,3,4};
    float b=10.11;
    char ah_arry[6]="hello";
    char ch='l';

    cout<<&ch<<endl;

    cout<<ah_arry<<endl;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<arr<<endl;
    cout<<b<<endl;
    cout<<&b<<endl;

    return 0;
}
