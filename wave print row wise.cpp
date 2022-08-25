#include <iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    int r,c;
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(r=0;r<row;r++)
    {
        if(r%2==0){
        for(c=0;c<col;c++)
        {
            cout<<arr[r][c]<<", ";
        }}
        else{
                for(c=0;c<col;c++){
            cout<<arr[r][col-c-1]<<", ";
        }}
    }
    cout<<"END";


    return 0;
}

