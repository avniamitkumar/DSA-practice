#include <iostream>
using namespace std;
double e(int x,int n)
{
    static double p=1,f=1;
    float r;
    //base case
        if(n==0)
        {
            return 1;
        }
    //recurrence relation
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+(p/f);
    }

}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<e(x,n);

    return 0;
}
