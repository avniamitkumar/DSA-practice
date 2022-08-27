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
int main()
{
    int arr[100]={2,6,8,10,15,20};
    display(arr,6);
    int n=6;
    cout<<"enter the element to be inserted"<<endl;
    int x;
    cin>>x;
    int i=n-1;
    while(arr[i]>x)
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=x;
    display(arr,7);
    return 0;
}
