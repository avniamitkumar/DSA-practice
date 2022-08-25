#include <iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    int r,c;
    int val=1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           arr[i][j]=val;
           val++;
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"wave print"<<endl;
    for(c=0;c<col;c++)
    {
        if(c%2==0)
        {
            for(r=0;r<row;r++)
            {
                cout<<arr[r][c]<<" ";
            }
        }
        else{
            for(r=0;r<row;r++)
            {
                cout<<arr[row-r-1][c]<<" ";
            }
        }
    }



    return 0;
}
