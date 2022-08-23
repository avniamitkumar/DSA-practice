#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    int i,k,j;

    for(i=0;i<n;i++)
    {
        for(j=i;j<=n-1;j++){
        for(k=i;k<=j;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;}
        cout<<endl;
    }

    return 0;
}
