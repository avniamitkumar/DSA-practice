//FINDING DUPLICATES IN AN SORTED ARRAY
#include <iostream>
using namespace std;
int main()
{
    int arr[]={3,6,8,8,10,12,15,15,15,20};
    int n=sizeof(arr)/sizeof(int);
    int lastDuplicate=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=lastDuplicate)
        {
            if(arr[i]==arr[i+1])
            {
                cout<<arr[i]<<endl;
                lastDuplicate=arr[i];
            }
        }
    }

    return 0;
}