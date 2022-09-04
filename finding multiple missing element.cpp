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
    int mini=arr[0];
    int maxi=arr[n-1];
    float sum=((n+1)*(maxi+mini))/2.0;
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
        cout<<sum;
        cout<<endl<<x<<endl;
        cout<<me<<endl;
        cout<<"THE MISSING ELEMENTS IS "<<me<<endl;
    }

    return 0;

}
