#include <iostream>
using namespace std;

void neg(int arr[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        while(arr[i]<0){i++;}
        while(arr[j]>=0){j--;}
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
}
void display(int arr[],int n)
{
    cout<<"THE ELEMENTS ARE"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[100]={2,-6,8,10,-15,-20};
    display(arr,6);
    int n=6;
    neg(arr,n);
    display(arr,n);


    return 0;
}
