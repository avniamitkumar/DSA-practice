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
void insert(struct array &arr,int index,int value)
{
    if(index>0 && index<=arr.len){
    int i;
    for(i=arr.len;i>index;i--)
    {
        arr.a[i]=arr.a[i-1];
    }
    arr.a[index]=value;
    arr.len++;}
}
void append(struct array *arr,int x)
{
    if(arr->len<arr->size)
    {
        arr->a[arr->len++]=x;
    }
}

int Delete(struct array *arr,int index)
{
    int x=0;
    int i;
    if(index>=0 && index<arr->len){
            x=arr->a[index];
    for(int i=index;i<=arr->len-1;i++)
        {
            arr->a[i]=arr->a[i+1];
        }
        arr->len--;
        return x;}
    return 0;
}

int linear_search(struct array arr,int key)
{
    int i;
    for(i=0;i<arr.len;i++)
    {
        if(key==arr.a[i])
        {
            return i;
        }
        return -1;
    }
}



int main()
{
    struct array arr={{2,4,6,8,10},5,20};
    display(arr);
    insert(arr,4,5);
    display(arr);
    append(&arr,19);
    display(arr);

    cout<<Delete(&arr,3)<<endl;
    display(arr);
    int key;
    cin>>key;
    cout<<linear_search(arr,key)<<endl;

    return 0;
}
