#include <iostream>
using namespace std;
template <class t>
void bubble(t a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;i<j;j--)
        {
            if(a[j]<a[j-1])
            {
                t temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}
template <class t>
t mx( t a,t b)
{
    return a>b?a:b;
}
int main()
{
   int x[5]={100,40,50,60,20};
   float y[5]={0.1,2.3,41.4,5.4,4.4};
   bubble(x,5);
   bubble(y,5);
   cout<<"sorted array "<<endl;
   for(int i=0;i<5;i++)
   {
       cout<<x[i]<< " ";
   }
   cout<<endl;
   cout<<"sorted array "<<endl;
   for(int i=0;i<5;i++)
   {
       cout<<y[i]<< " ";
   }
   cout<<endl;
   cout<<mx(2.2,0.23)<<endl;
    return 0;
}
