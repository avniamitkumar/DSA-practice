#include <iostream>
#include <stdio.h>
using namespace std;
struct array
{
    int a[20];
    int size;
    int len;
};

void display(struct array arr)
{
    cout<<"ELEMENTS ARE"<<endl;
    for(int i=0;i<arr.len;i++)
    {
        cout<<arr.a[i]<<" ";

    }
    cout<<endl;
}
struct array* Union(struct array* arr,struct array* brr)
{
    int i=0,j=0,k=0;
    struct array *c=(struct array *)malloc(sizeof(struct array));
    //struct array c[arr->len+brr->len];
    while(i<arr->len && j<brr->len)
    {
        if(arr->a[i]<brr->a[j])
        {
            c->a[k]=arr->a[i];
            i++;
        }
        else if(arr->a[i]>brr->a[j])
        {
            c->a[k]=brr->a[j];
            j++;
        }
        else if(arr->a[i]==brr->a[j]){
            c->a[k]=arr->a[i];
            i++;
            j++;
        }
        k++;
    }
    while(i<arr->len)
    {
        c->a[k++]=arr->a[i++];
    }
    while(j<brr->len)
    {
        c->a[k++]=brr->a[j++];
    }
    c->len=k;
    c->size=10;
    return c;

}
struct array * intersect(struct array *arr,struct array *brr)
{
    int i=0,j=0,k=0;
    struct array *c=(struct array *)malloc(sizeof(struct array));
    while(i<arr->len && j<brr->len)
    {
         if(arr->a[i]<brr->a[j])
        {
            i++;
        }
        else if(arr->a[i]>brr->a[j])
        {
            j++;
        }

        if(arr->a[i]==brr->a[j])
        {
            c->a[k]=arr->a[i];
            i++;
            k++;
            j++;
        }
    }
    c->len=k;
    c->size=10;
    return c;


};

struct array *diff(struct array *arr,struct array *brr)
{
    struct array *c=(struct array *)malloc((sizeof(struct array)));
    int i=0,j=0,k=0;
    while(i<arr->len && j<brr->len)
    {
        if(arr->a[i]<brr->a[j])
        {
            c->a[k++]=arr->a[i];
            i++;
        }
        else if(arr->a[i]>brr->a[j])
        {
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    for(;i<arr->len;i++)
    {c->a[k++]=arr->a[i];}


    c->len=k;
    c->size=10;
    return c;
};

int main()
{
     struct array arr1={{2,9,21,28,35},10,5};
     display(arr1);
     struct array arr2={{2,3,9,18,28},10,5};
     display(arr2);
     struct array *arr3;
     struct array *arr4;
     struct array *arr5;
     arr3=Union(&arr1,&arr2);
     display(*arr3);
     arr4=intersect(&arr1,&arr2);
     display(*arr4);
     arr5=diff(&arr1,&arr2);

     display(*arr5);
    return 0;
}
