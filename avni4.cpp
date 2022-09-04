//FINDING DUPLICATES IN AN SORTED ARRAY WITH NUMBER OF TIMES
#include <iostream>
using namespace std;
int main()
{
    int arr[]={3,6,8,8,10,12,15,15,15,20};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            int j=i+1;
            while(arr[j]==arr[i])
            {
                j++;
            }
            cout<<arr[i]<<" is appearing "<<j-i<<" times"<<endl;
            i=j-1;
        }
    }
    

    return 0;
}