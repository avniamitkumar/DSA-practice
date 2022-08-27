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

void left_shift(int arr[],int n)
{
    int temp=arr[0];
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=0;
}
void left_rotate(int arr[],int n)
{
    int temp=arr[0];
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
void right_rotate(int arr[],int n)
{
    int temp=arr[n-1];
    int i;
    for(i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}

void right_shift(int arr[],int n)
{

    int i;
    for(i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=0;
}


int main()
{

    int arr[]={2,4,6,8,10};
    int n=sizeof(arr)/sizeof(int);
    display(arr,n);
    cout<<"after left shift"<<endl;
    left_shift(arr,n);
    display(arr,n);
    cout<<"after left rotate"<<endl;
    left_rotate(arr,n);
    display(arr,n);
    cout<<"after right rotate"<<endl;
    right_rotate(arr,n);
    display(arr,n);
    cout<<"after right shift"<<endl;
    right_shift(arr,n);
    display(arr,n);

    return 0;
}
