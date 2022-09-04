#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nELEMENTS IN SORTED ORDER"<<endl;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int l=arr[0];
    int h=arr[n-1];
    int diff=l-0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]-i!=diff)
        {
            cout<<"MISSING ELEMENT IS "<<diff+i<<endl;
            break;
        }
    }
    return 0;}
