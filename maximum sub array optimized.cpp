#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int csum[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sm=0;
    for(int i=0;i<n;i++)
    {
        sm=sm+arr[i];
        csum[i]=sm;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<csum[i]<<" ";
    }
    cout<<endl;
    int i,j,k,wi,wj;
    int mxsum=INT_MIN;

    for(i=0;i<n;i++)
    {
       // int sum=0;
        for(j=i;j<n;j++)
        {
            int sum=csum[j]-csum[i-1];
            if(sum>=mxsum)
            {
                mxsum=sum;
                wi=i;
                wj=j;
            }
            cout<<endl<<"sum is "<<sum<<endl;
            cout<<endl;
        }
    }
    cout<<"max sum is "<<mxsum<<endl;
    cout<<"maximum sum sub array is:"<<endl;
    while(wi<=wj)
    {
        cout<<arr[wi]<<" ";
        wi++;
    }
    cout<<endl;
    return 0;
}

