#include <iostream>
using namespace std;

void rotateimage(int arr[][4],int m,int n)
{
    //SWAPPING ELEMENTS

    for(int t=0;t<m;t++)
    {
        int i=0,j=n-1;
        while(i<j)
        {
            swap(arr[t][i],arr[t][j]);
            i++;
            j--;
        }
    }
    cout<<"after rotation"<<endl;
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //TAKING TRANSPOSE OF ELEMENTS
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
                swap(arr[i][j],arr[j][i]);
            }
        }
    }


}


int main()
{
    int m,n;
    cin>>m>>n;
    int arr[m][4];
    int val=1;
    for(int i=0;i<m;i++)
    {
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
    rotateimage(arr,m,n);

}
