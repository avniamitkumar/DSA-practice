//PAIRS WITH GIVEN DIFFERENCE
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[]={2,4,8,9,13,16,19,23,25};
    int n=8;
    int res=10;
    int i=0,j=1;
    while(i<j)
    {
        if(arr[j]-arr[i]==res)
        {
            cout<<arr[i]<<" and "<<arr[j]<<endl;
            i++;
            j++;
            
        }
        else if(arr[j]-arr[i]>res){
            i++;
        }
        else
        {j++;}
    }
    return 0;
}