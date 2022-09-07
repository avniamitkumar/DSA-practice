#include <iostream>
using namespace std;
struct mat{
    int a[100];
    int n;

};
void setdata(struct mat* m,int i,int j,int x)
{
    if(i==j)
    {
        m->a[i-1]=x;
    }
}
int getdata(struct mat* m,int i,int j)
{
    if(i==j)
    {
        return m->a[i-1];
    }
    else
    {
        return 0;
    }

}

void display(struct mat m)
{
    for(int i=0;i<m.n;i++)
    {
        for(int j=0;j<m.n;j++)
        {
            if(i==j)
            {
                cout<<m.a[i]<<" ";
            }
            else
            {
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }

}

int main()
{
    struct mat m;
    m.n=4;
    setdata(&m,1,1,5);
    setdata(&m,2,2,8);
    setdata(&m,3,3,9);
    setdata(&m,4,4,12);
    cout<<getdata(&m,2,2)<<endl;
    display(m);
    return 0;
}
