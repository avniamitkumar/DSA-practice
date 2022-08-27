
#include <iostream>
#include <stdio.h>
using namespace std;
struct array {
    int a[20];
    int len;
    int size;
};
void display(struct array arr)
{
    cout<<"THE ELEMENTS ARE"<<endl;
    for(int i=0;i<arr.len;i++)
    {
        cout<<arr.a[i]<<" ";
    }
    cout<<endl;
}

void reverse(struct array &arr)
{
    int b[arr.len];
    //int temp;
    int i,j;
    for(i=0,j=arr.len-1;j>=0;i++,j--)
    {
        b[i]=arr.a[j];
    }
    for(int i=0;i<arr.len;i++)
    {
        arr.a[i]=b[i];
    }
}

void rev2(struct array &arr)
{
    int temp;
    int i=0,j=arr.len-1;;
    while(i<j)
    {
        swap(arr.a[i],arr.a[j])
        ;
        i++;
        j--;
    }
}



int main()
{
    struct array arr={{2,4,6,8,10},5,20};
    display(arr);
    reverse(arr);
    display(arr);
    rev2(arr);
    display(arr);

    return 0;
}
