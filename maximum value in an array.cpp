#include <iostream>
#include<climits>
#include <algorithm>
using namespace std;
void createarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
int maxval(int arr[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}


int main()
{

    int n;
    cin>>n;
    int arr[n];
    createarr(arr,n);
    int a=maxval(arr,n);
    cout<<a;
    return 0;
}

