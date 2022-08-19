#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row,col;
    for(row=0;row<n;row++)
    {
        if(row<(n+1)/2){
        for(col=0;col<n-2-row;col++)
        {
            cout<<"*    ";
        }
        for(int sp=0;sp<2*row-1;sp++)
        {
            cout<<".....";
        }
        }
        else
        {
            for(col=0;col<2*row-n;col++)
            {
                cout<<"*    ";
            }
        }

        cout<<endl;
    }

    return 0;
}
