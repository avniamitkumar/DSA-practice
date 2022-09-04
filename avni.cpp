//FIND MULTIPLE MISSING ELEMENTS IN AN ARRAY
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[]={6,7,8,9,11,12,15,16,17,18};
    int n=sizeof(arr)/sizeof(n);
    sort(arr,arr+n);
    int diff=arr[0]-0;
    for(int i=0;i<n;i++)
    {
     if(arr[i]-i!=diff)
     {
        while(arr[i]-i<diff)
        {
            cout<<i+diff<<endl;
            diff++;
        }
     }   
    }
}