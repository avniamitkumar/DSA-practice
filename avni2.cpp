#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[]={3,7,4,9,12,6,1,11,2,10};
    int n=sizeof(arr)/sizeof(n);
    sort(arr,arr+n);
    int maxi=arr[n-1];
    int hash[maxi]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }
    for(int i=arr[0];i<maxi;i++)
    {
        if(hash[i]==0)
        {
            cout<<i<<endl;
        }
    }
    }