 #include <iostream>
#include <stdio.h>
using namespace std;
struct array {
    int a[20];
    int len;
    int size;
};
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void display(struct array arr)
{
    cout<<"THE ELEMENTS ARE"<<endl;
    for(int i=0;i<arr.len;i++)
    {
        cout<<arr.a[i]<<" ";
    }
    cout<<endl;
}
//LINEAR SEARCH BY TRANSPOSITION
int linear_search_T(struct array *arr,int key)
{
    int i;
    for(i=0;i<arr->len;i++)
    {
        if(key==arr->a[i])
        {
            swap(arr->a[i],arr->a[i-1]);
            return i;
        }
    }
    return -1;
}


int linear_search_H(struct array* arr,int key)
{
    int i;
    for(i=0;i<arr->len;i++)
    {
        if(key==arr->a[i])
        {
            swap(arr->a[i],arr->a[0]);
            return i;
        }
    }
    return -1;
}



int main()
{
    struct array arr={{2,4,6,8,10},5,20};

    int key;
    cin>>key;
    cout<<linear_search_T(&arr,key)<<endl;
    cout<<linear_search_H(&arr,key)<<endl;

    return 0;
}

