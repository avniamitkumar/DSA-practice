
#include <iostream>
using namespace std;
template <class t>
t find_min(t arr[],int n)
{
 t min=arr[0];
 for(int i=1;i<n;i++)
 {
     if(min>arr[i])
     {
         min=arr[i];
     }
 }
 return min;
}

int main()
{
    int i;
    float f;
    char c;
    int ii[5]={20,4,2,38,5};
    float ff[]={-9.9,12.2,3.1,9.9,8.9};
    char cc[]={'a','A','k','l','m'};
    i=find_min(ii,5);
    f=find_min(ff,5);
    c=find_min(cc,5);
    cout<<f<<endl;
    cout<<i<<endl;
    cout<<c<<endl;
    return 0;}