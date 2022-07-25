#include <iostream>
using namespace std;

void insertionsort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int x=a[i];
        int j=i-1;
        while(j>-1 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
}

int main()
{
    int a[]={5,7,8,2,3};
    insertionsort(a,5);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}
