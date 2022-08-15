#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int max=INT_MIN;
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++)
    {
        int m;
        cin>>m;
        if(m>max)
        {
            max=m;
        }
    }
    cout<<"max is "<<max<<endl;

    return 0;
}
