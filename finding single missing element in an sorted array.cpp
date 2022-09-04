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
    float sum=(arr[n-1]*(arr[n-1]+1))/2.0;
    float x=0;
    for(int i=0;i<n;i++)
    {
        x+=arr[i];
    }
    if(x==sum)
    {
        cout<<"NO ELEMENT MISSING"<<endl;
    }
    else{
        float me=sum-x;
        cout<<"THE MISSING ELEMENTS IS "<<me<<endl;
    }
    return 0;
}
