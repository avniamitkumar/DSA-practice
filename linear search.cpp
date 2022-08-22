#include <iostream>
using namespace std;
int main()
{
    int arr[4]={4,8,12,2};
    int key=12;
    int i;
    for(i=0;i<4;i++)
    {
        if(arr[i]==key)
        {
            cout<<"KEY IS FOUND AT INDEX "<<i<<endl;
            break;
        }
    }
    if(i==4)
    {
        cout<<"KEY IS NOT FOUND"<<endl;
    }

    return 0;
}
