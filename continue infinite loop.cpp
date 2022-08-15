#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    while(i<=n)
    {
        cout<<i<<endl;
        if(i==3)
        {
            continue;
        }
        i=i+1;
    }

    return 0;
}
