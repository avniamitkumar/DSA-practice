//FINDING DUPLICATES IN AN SORTED ARRAY WITH NUMBER OF TIMES USING HASHTABLE
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[]={3,6,8,8,10,12,15,15,15,20};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+n);
    int hash[arr[n-1]+1]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }
    for(int i=arr[0];i<arr[n-1]+1;i++)
    {
        if(hash[i]>1)
        {
            cout<<i<<" is appearing "<<hash[i]<<" times"<<endl;
        }
    }
    return 0;
}