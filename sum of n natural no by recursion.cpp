#include <iostream>
using namespace std;

int sumofn(int n)
{
    //base case
    if(n==1)
    {
        return 1;
    }
    //recurrence relation
    return n+sumofn(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<sumofn1(n);

    return 0;
}
