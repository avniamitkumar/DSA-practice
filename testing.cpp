#include <iostream>
using namespace std;
void print(int **a,int x ,int y)
{
    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<=y;j++)
        {
            cout<<a[x][y]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int i,j;

    //EVERYTHING IN STACK
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
    //PARTIALLY IN HEAP AND STACK
    int *B[3];
    B[0]=new int [4];
    B[1]=new int [4];
    B[2]=new int [4];
    //EVERYTHING IN HEAP
    int **C;
    C=new int*[3];
    C[0]=new int [4];
    C[1]=new int [4];
    C[2]=new int [4];
    int x=3,y=4;

        for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    delete *B;
    delete C;


    return 0;
}
