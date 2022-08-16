#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    float D;
    cin>>a>>b>>c;
    D=((b*b)-4*a*c);
    if(D<0)
    {
        cout<<"Imaginary"<<endl;
    }
    else if (D==0)
    {
        cout<<"Real and Equal"<<endl;
        float roots=(-b+sqrt(D))/((2.0)*a);
        cout<<roots<<" "<<roots<<endl;
    }
    else{
        cout<<"Real and Distinct"<<endl;
         float r1=(-b+sqrt(D))/((2.0)*a);
         float r2=(-b-sqrt(D))/((2.0)*a);
        if(r1<r2)
        {
            cout<<r1<<" "<<r2;
        }
        else{
            cout<<r2<<" "<<r1;
        }
    }


    return 0;
}
