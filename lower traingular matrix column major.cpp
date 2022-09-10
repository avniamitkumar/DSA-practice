#include <iostream>
using namespace std;

struct mat
{
    int *a;
    int n;
};
void set(struct mat *m,int i,int j,int x)
{
    if(i>=j)
    {
      m->a[m->n*(j-1)-(j-2)*(j-1)/2+i-j]=x;
    }
}
int get (struct mat *m,int i,int j)
{
    if(i>=j)
    {
        return m->a[m->n*(j-1)-(j-2)*(j-1)/2+i-j];
    }
    return 0;
}

display(struct mat *m)
{
    int i,j;
    for(int i=1;i<=m->n;i++)
    {
        for(j=1;j<=m->n;j++)
        {
            if(i>=j)
            {
                cout<<m->a[m->n*(j-1)-(j-2)*(j-1)/2+i-j]<<" ";
            }
            else{cout<<"0 ";}
        }
        cout<<endl;
    }

}


int main()
{
    struct mat m;
    cout<<"ENTER DIMENSION"<<endl;
    cin>>m.n;
    m.a=new int [(m.n)*(m.n+1)/2];
    cout<<"enter all elements";
    int i,j,x;
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
            cin>>x;
            set(&m,i,j,x);
        }
    }
    cout<<endl;
    display(&m);

    return 0;
}
