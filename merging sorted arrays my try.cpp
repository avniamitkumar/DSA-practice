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
    int a[]={2,5,7,30,33};
    int b[]={1,3,17,22};
    int n=sizeof(a)/sizeof(int);
    int m=sizeof(b)/sizeof(int);
    int c[m+n];
    int i,j,k;
    while(i<n && j<m)
    {
        if(a[i]>b[j])
        {
            c[k]=b[j];
            k++;
            j++;
        }
        else{
            c[k]=a[i];
            k++;
            i++;
        }}
        while(i<n)
        {
            c[k]=a[i];
            k++;
            i++;
        }
        while(j<m)
        {
            c[k]=b[j];
            k++;
            i++;
        }
        display(a,n);
        display(b,m);
        display(c,m+n);

    return 0;
}
