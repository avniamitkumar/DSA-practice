#include <iostream>
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
void union (struct array * arr,struct array* brr)
{
    int i=0,j=0,k=0;
    struct array c[arr->len+brr->len];
    while(i<arr->len && j<brr->len)
    {
        if(arr->a[i]<brr->a[i])
        {
            c->a[k]=arr->a[i];
            i++;
        }
        else if(arr->a[i]>brr->a[i])
        {
            c->a[k]=brr->a[j];
            j++;
        }
        else{
            c->a[k]=arr->a[j];
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
        c->a[k++]=brr->a[i++];
    }



}


int main()
{
     struct array arr1={{2,9,21,28,35},10,5};
     struct array arr1={{2,3,9,18,28},10,5};
     arr3=union(&arr1,&arr2);
     display(*arr3);
    return 0;
}
