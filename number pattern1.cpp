#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //LOOP FOR ROWS
    for(int i=1;i<=n;i++)
    {
        //FOR SPACES
        for(int k=1;k<=2*(n-i);k++)
        {
            cout<<" ";
        }
        int m=1;
        //PRINT 2N-1 TIMES
        for(int j=1;j<=((2*i)-1);j++)
        {
           //cout<<"*";
           //LOOP TO PRINT NUMBERS

           cout<<m<<" ";
           m++;
        }


        cout<<endl;
    }
    return 0;
}
