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
    int x,i=0,j=n-1;
    while(i<j)
    {
        x=arr[i]+arr[j];
        if(x==sum)
        {
            cout<<arr[i]<<" and "<<arr[j]<<endl;
            i++;
            j--;
        }

        if(x<sum)
        {
            i++;
        }
        if(x>sum)
        {
            j--;
        }
    }

    return 0;
}

