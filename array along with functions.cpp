#include <iostream>
using namespace std;
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={1,2,3,45,6,7};
    int n=sizeof(arr)/sizeof(int);
    printarr(arr,n);

}
