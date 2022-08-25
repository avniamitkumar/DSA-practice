#include <iostream>
using namespace std;

int binary_search(int *arr,int low,int high,int key)
{
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            high=low-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int R_binary_search(int *arr,int low,int high,int key)
{
    int mid;
    if(low<=high)
    {
        mid=(low+high)/2;
        if(key==arr[mid])
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            return R_binary_search(arr,mid+1,high,key);
        }

        else{
            return R_binary_search(arr,low,mid-1,key);
        }

    }
    return -1;
}

int main()
{
    int arr[]={2,4,6,8,10};
    int n=sizeof(arr)/sizeof(int);
    cout<<binary_search(arr,0,n-1,8)<<endl;
    cout<<R_binary_search(arr,0,n-1,80)<<endl;

    return 0;
}
