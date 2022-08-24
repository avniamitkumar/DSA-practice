#include <iostream>
using namespace std;
int main()
{
    int r;
    int c;
    cout<<"enter the no of rows you want"<<endl;
    cin>>r;
    cout<<"enter the no of cols you want"<<endl;
    cin>>c;
    int val=1;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[i][j]=val;
            cout<<arr[i][j]<<" ";
            val++;
        }
        cout<<endl;
    }
    return 0;
}
