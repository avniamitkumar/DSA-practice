#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row,col,no;
    for(row=0;row<n;row++)
    {
        //for spaces
        for(col=0;col<2*row;col++)
        {
            if(row==0){}
            else
            {
                cout<<" ";
            }
        }

        //for decreasing no
        for(col=0;col<=n-row;col++)
        {
            cout<<n-row-col<<" ";
        }
        //for increasing no
        no=1;
        for(col=0;col<n-row;col++)
        {
            cout<<no<<" ";
            no++;
        }

        cout<<endl;
    }
    for(row=0;row<=n;row++)
    {
        //for spaces
        for(col=0;col<2*(n-row);col++)
        {
            cout<<" ";
        }
        //for decreasing no
        for(col=0;col<=row;col++)
        {
            cout<<row-col<<" ";
        }
        no=1;
        //for increasing no
        for(col=0;col<row;col++)
        {
            cout<<no<<" ";
            no++;
        }
        cout<<endl;
    }

    return 0;
}
