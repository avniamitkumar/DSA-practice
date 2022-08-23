#include <iostream>
#include <algorithm>
using namespace std;
void createarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}


int main()
{

    int n;
    cin>>n;
    int arr[n];
    createarr(arr,n);
    cout<<"ENTER THE REQUIRED SUM "<<endl;
    int sum;
    cin>>sum;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                cout<<arr[i]<<" and "<<arr[j]<<endl;
                break;
            }
        }
    }
    return 0;
}
