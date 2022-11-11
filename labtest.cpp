#include <iostream>

using namespace std;
class matrixADT
{
    public:
    int row;
    int col;
    int arr[100][100];
    //READ A MATRIX
    void input()
    {
        cout<<"Enter number of rows you want"<<endl;
        cin>>row;
        cout<<"Enter number of columns you want"<<endl;
        cin>>col;
        cout<<"Enter the array elements"<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cin>>arr[i][j];
            }
        }
    }
    //PRINTING A MATRIX
    void printmat()
    {
        cout<<"THE MATRIX IS"<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    //ADDITION OF MATRIX
    void addMAT(matrixADT a,matrixADT b)
    {
        
        cout<<"THE ADDITION OF GIVEN MATRICES IS"<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<a.arr[i][j]+b.arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    //SUBTRACTION OF MATRIX
    void subMAT(matrixADT a,matrixADT b)
    {
        cout<<"THE SUBTRACTION OF GIVEN MATRICES ARE"<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<a.arr[i][j]-b.arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    matrixADT mulMAT(matrixADT a, matrixADT b)
    {
        cout<<"THE RESULTANT MATRIX AFTER MULTILICATION IS"<<endl;
        matrixADT r;
        r.row=a.row;
        r.col=b.col;
        
        int rslt[row][col];
        int i,j,k;
        for(i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                r.arr[i][j]=0;
                //rs3lt[i][j]=0;
                for(int k=0;k<row;k++)
                {
                    r.arr[i][j] += a.arr[i][k] * b.arr[k][j];
                    
                }
                //cout<<rslt[i][j]<<" ";
            }
            //cout<<endl;
        }
        return r;
    }
    
};
int main()
{
    matrixADT m,n,p;
    cout<<"FOR MATRIX A"<<endl;
    m.input();
    cout<<"FOR MATRIX B"<<endl;
    n.input();
    cout<<"MATRIX A IS ::"<<endl;
    m.printmat();
    cout<<"MATRIX B IS ::"<<endl;
    n.printmat();
    m.addMAT(m,n);
    m.subMAT(m,n);
    p=m.mulMAT(m,n);
    p.printmat();
    

    return 0;
}
