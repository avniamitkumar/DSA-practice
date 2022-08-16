#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int max=INT_MIN;
    int n=3;
    int no;
    for(int i=0;i<n;i++)
    {

        cin>>no;
        if(no>max)
        {
            max=no;
        }
    }
    cout<<max;
    return 0;
}
