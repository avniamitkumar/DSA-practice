#include <iostream>
using namespace std;
int sum(int arr[],int n)
{
    if (n==1)
    {
        return arr[0];
    }

    return arr[n-1]+sum(arr,n-1);
}

int main()
{
    int arr[]={2,4,6,8,10};
    int n=sizeof(arr)/sizeof(int);
    cout<<sum(arr,n)<<endl;
    return 0;
}
