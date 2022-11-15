#include <iostream>
using namespace std;
const int size=3;
class vector
{
  int v[size];
  public:
  vector();
  vector(int *x);
  friend vector operator*(int a,vector b);
    friend vector operator*(vector b,int a);
    friend istream & operator >>(istream &,vector &);
    friend ostream & operator <<(ostream &,vector &);

};
vector::vector()
{
    for(int i=0;i<size;i++)
    {
        v[i]=0;
    }
}
vector::vector(int *x)
{
    for(int i=0;i<size;i++)
    {
        v[i]=x[i];
    }
}

vector operator*(int a,vector b)
{
    vector c;
    for(int i=0;i<size;i++)
    {
        c.v[i]=a*b.v[i];
    }
    return c;
    
}
vector operator*(vector b,int a)
{
    vector c;
    for(int i=0;i<size;i++)
    {
        c.v[i]=a*b.v[i];
    }
    return c;
    
}
istream & operator >>(istream &din,vector &b)
{
    for(int i=0;i<size;i++)
    {
        din>>b.v[i];
    }
    return(din);
}
ostream & operator <<(ostream &out,vector &b)
{
    out<<"("<<b.v[0];
    for(int i=0;i<size;i++)
    {
        out<<", "<<b.v[i];
    }
    out<<")";
    return (out);
}





int x[size]={2,4,6}
;

int main()
{
    vector m;
    vector n=x;
    cout<<"enter elements of m "<<endl;
    cin>>m;;
    cout<<endl;
    cout<<"m= "<<m<<endl;
    vector p,q;
    p=2*m;
    q=n*2;
    cout<<endl;
    cout<<"p "<<p<<endl;
    cout<<"q "<<q<<endl;
    return 0;
}
