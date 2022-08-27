#include <iostream>
using namespace std;
void display(int arr[],int n)
{
    cout<<"THE ELEMENTS ARE"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool isSorted(int arr[],int n)
{
    int i=0;
    while(i<n-1)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
            break;
        }
        i++;
    }
    return true;
}


int main()
{
    int arr[100]={2,6,8,10,15,20};
    display(arr,6);
    int n=6;
    int sum=0;
    if(isSorted(arr,n)==true)
    {
        cout<<"THE ARRAY IS SORTED"<<endl;
    }
    else{cout<<"THE ARRAY IS NOT SORTED"<<endl;}

    return 0;
}

