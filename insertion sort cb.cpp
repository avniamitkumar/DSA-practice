#include <iostream>
using namespace std;
using namespace std;
int main()
{
    int n=5,j;
    int arr[n]={5,3,2,4,1};
    for(int i=1;i<n;i++)
    {
        int puc=arr[i];
        for(j=i-1;j>=0;arr[j]>puc)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=puc;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }



    return 0;
}
