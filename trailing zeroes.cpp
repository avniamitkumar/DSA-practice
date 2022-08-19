#include <iostream>
using namespace std;

int zeroes(int n)
{
    int D;
    int ans=0;
    for(D=5;n/D>=1;D=D*5)
    {
        ans+=n/D;
    }
    return ans;

}

int main()
{

    int n;
    cin>>n;
    cout<<zeroes(n)<<endl;
    return 0;
}
