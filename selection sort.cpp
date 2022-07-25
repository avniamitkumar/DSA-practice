#include <iostream>
using namespace std;

void selection(int a[],int n)
{
    int i;
    int k;

    for(i=0;i<n-1;i++)
    {
        int j;
        for(j=k=i;j<n;j++)
        {
            if(a[j]<a[k])
            {
                k=j;}

            }
             swap(a[i],a[k]);
        }}




int main()
{
    int a[]={5,7,8,2,3};
    selection(a,5);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }


    return 0;
}
