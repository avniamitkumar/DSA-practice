#include <iostream>
using namespace std;

void spiralprint(int arr[][4],int n,int m)
{
    //INTIALISE THE FOUR ITERATORS
    int sr=0,sc=0,er=n-1,ec=m-1;
    while(sc<=er and sc<=ec)
        {
            //1.PRINT THE SR FROM SC TO EC
            //SR++;


            for(int col=sc;col<=ec;col++)
            {
                cout<<arr[sr][col]<<" ";
            }
            sr++;


            //2.PRINT EC FROM SR TO ER,EC--

            for(int row=sr;row<=er;row++)
            {
                cout<<arr[row][ec]<<" ";
            }
            ec--;

            //3.PRINT ER FROM EC TO SC,ER--

            if(sr<er){
            for(int col=ec;col>=sc;col--)
            {
                cout<<arr[er][col]<<" ";
            }
            er--;}

            //4.PRINT SC FROM ER TO SR,SC++
            if(sc<ec){
            for(int row=er;row>=sr;row--)
            {
                cout<<arr[row][sc]<<" ";
            }
            sc++;}
        }
}



int main()
{
    int m,n;
    cin>>m>>n;
    int arr[m][4];
    int val=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            arr[i][j]=val;
            val++;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"SPIRAL PRINT"<<endl;
    spiralprint(arr,m,n);

    return 0;
}



