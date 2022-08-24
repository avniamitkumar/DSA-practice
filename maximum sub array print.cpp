#include <iostream>
#include <climits>
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
    int i,j,k,wi,wj;
    int mxsum=INT_MIN;

    for(i=0;i<n;i++)
    {
       // int sum=0;
        for(j=i;j<n;j++)
        {
            int sum=0;
            for(k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
                sum+=arr[k];


            }
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

