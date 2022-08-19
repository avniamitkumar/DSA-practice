#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int no=1;
    int row,col;
    for(row=1;row<n;row++)
    {
        no=1;
        //for increasing no
        for(int i=0;i<row;i++)
        {
            cout<<no<<"    ";
            no++;
        }
        //for spaces
        for(int sp=0;sp<2*(n-row)-1;sp++)
        {
            cout<<"     ";
        }
        no=no-1;
        //for decreasing numbers
        for(int i=0;i<row;i++)
        {
            cout<<no<<"    ";
            no--;

        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"    ";
    }
    for(int i=n-1;i>0;i--)
    {
        cout<<i<<"    ";
    }


    return 0;
}
