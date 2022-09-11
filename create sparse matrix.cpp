#include <iostream>
using namespace std;

struct element
{
    int i;
    int j;
    int x;
};
struct sparse
{
    int m;
    int n;
    int num;//number of non zero elements'
    struct element* e;
};

void create(struct sparse *s)
{
    int i;
    cout<<"ENTER DIMENSIONS"<<endl;
    cin>>s->m>>s->n;
    cout<<"ENTER NUMBER OF NON ZERO ELEMENTS"<<endl;
    cin>>s->num;
    s->e=new struct element[s->num];
    cout<<"ENTER ALL ELEMENTS :"<<endl;
    for(i=0;i<s->num;i++)
    {
        cin>>s->e[i].i;
        cin>>s->e[i].j;
        cin>>s->e[i].x;
    }

}

void display(struct sparse s)
{
    int i,j,k=0;
    for(i=1;i<=s.m;i++)
    {
        for(j=1;j<=s.n;j++)
        {
            if(i==s.e[k].i && j==s.e[k].j)
            {
                cout<< s.e[k++].x<<" ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }

}


int main()
{
    struct sparse s;
    create(&s);
    display(s);
    return 0;
}
