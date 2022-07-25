
#include <iostream>
using namespace std;

void bubblesort(int a[],int n)
{
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
            flag++;
        }
    }
    if(flag==0)
    {
        break;
    }
}}

int main()
{
    int a[]={5,7,8,2,3};
    bubblesort(a,5);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }


    return 0;

}
