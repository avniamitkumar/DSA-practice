#include <iostream>
#include <algorithm>
using namespace std;

bool compare (int a ,int b)
{
    cout<<"comparing "<<a<<" and "<<b<<endl;
    return a>b;
}
int main()
{
    int arr[]={10,2,45,3,21};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //INBUILT SORT
    //FOR ASCENDING ORDER
    sort(arr,arr + n);

     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //for descending order
    sort(arr,arr +n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
