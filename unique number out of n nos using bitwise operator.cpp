#include <iostream>
using namespace std;
int main()
{
    int ans=0;
    int n;
    cin>>n;
    int no;
    for(int i=0;i<n;i++)
    {
        cin>>no;
        ans=(ans^no);
    }
    cout<<ans;

    return 0;
}
