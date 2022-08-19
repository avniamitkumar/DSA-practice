#include <iostream>
using namespace std;
int main()
{
    int row,col;
    int n;
    cin>>n;
    for(row=1;row<=n;row++)
    {
        int m=row;
        //FOR SPACE
        for(int sp=0;sp<n-row;sp++)
        {
            cout<<"    ";
        }
        for(col=1;col<=row;col++)
        {
           cout<<m<<"   ";
           m++;
        }
        m=m-2;

        for(col=1;col<row;col++)
        {
            cout<<m<<"    ";
            m--;
        }


        cout<<endl;
    }

    return 0;
}
