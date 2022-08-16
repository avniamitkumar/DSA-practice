#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row,col;
    for(row=0;row<n;row++)
    {


        //for spaces
        for(col=0;col<n-row-1;col++)
        {
            cout<<" ";
        }

        //first and last line
        if(row==0 || row==n-1)
        {
            for(int m=0;m<n;m++)
            {
                cout<<"*";
            }
        }
        else{
            for(col=0;col<n;col++)
            {
                if(col==0 or col==n-1)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }

        cout<<endl;
    }


    return 0;
}
