#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row,col,no=1;
    for(row=1;row<=n;row++)
    {
        for(col=0;col<row;col++)
        {
           if(col==0 || col==row-1)
           {
               cout<<row<<"    ";
           }
           else{
            cout<<"0    ";
           }
        }
        cout<<endl;
    }

    return 0;
}

