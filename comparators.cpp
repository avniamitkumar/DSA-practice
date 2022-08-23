#include <iostream>
#include <algorithm>
using namespace std;
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool compare(int a, int b)
{
    return a>b;
}
void bubblesort(int arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        for(int j=0;j<=n-2-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


//BUBBLESORT USING COMPARARTORS
void bubblesort2(int arr[],int n,bool (&mycompare)(int a,int b))
{
    for(int i=0;i<=n-2;i++)
    {
        for(int j=0;j<=n-2-i;j++)
        {
            if(mycompare(arr[j+1],arr[j]))
            {
                swap(arr[j+1],arr[j]);
            }
        }
    }
}




int main()
{
    int arr[]={2,34,21,1,2,-1};
    int n=sizeof(arr)/sizeof(int);
    printarr(arr,n);
    bubblesort2(arr,n,compare);
    printarr(arr,n);
    return 0;
}
