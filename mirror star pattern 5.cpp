#include <iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int row,col,sp;
    for(row=1;row<=((n+1)/2);row++)
    {
            //for spaces
            for(int sp=0;sp<((n+1)/2)-row;sp++)
            {
                cout<<"     ";
            }
            //for stars
            for(col=0;col<2*row-1;col++)
            {
                cout<<"*    ";
            }

        cout<<endl;
    }
    int no=(n+1)/2;
    for(row=0;row<=((n+1)/2);row++)
    {
            //for spaces
            for(col=0;col<=row;col++)
            {
                cout<<"     ";
            }

            //for stars
            for(int i=0;i<(n-2-2*row);i++)
            {
                cout<<"*    ";
            }
            cout<<endl;
    }

    return 0;
}
