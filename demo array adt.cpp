#include <iostream>
#include <stdio.h>
using namespace std;
struct array{
    int *A;
    int size;
    int len;
}
;
void display(struct array arr)
{
    cout<<"THE ELEMENTS ARE"<<endl;
    for(int i=0;i<arr.len;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}

int main()
{
    struct array arr;
    cout<<"ENTER THE SIZE OF AN ARRAY"<<endl;
    cin>>arr.size;
    arr.A= new int[arr.size];
    arr.len={0};

    int n,i;
    cout<<"ENTER THE NO OF ELEMENTS YOU WANT"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr.A[i];
    }
    arr.len=n;
    display(arr);



    return 0;
}

