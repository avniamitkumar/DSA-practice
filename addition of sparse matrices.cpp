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

struct sparse add (struct sparse *s1,struct sparse *s2)
{
    struct sparse *sum;
    int i=1,j=1,k=1;
    /*if(s1->m=!s2->m && s1->n!=s2->n)
    {
        return NULL;
    }*/
    sum=new sparse;
    sum->m=s1->m;
    sum->n=sum->n;
    sum->e=new element[s1->num+s2->num];
    while(i<=s1->num && j<=s2->num){
    if(s1->e[i].i<s2->e[j].i)
    {
        sum->e[k++]=s1->e[i++];
    }
    else if(s1->e[i].i>s2->e[j].i)
    {
        sum->e[k++]=s2->e[j++];
    }
    else{
        if(s1->e[i].j<s2->e[j].j)
        {
            sum->e[k++]=s1->e[i++];
        }
        else if(s1->e[i].j>s2->e[j].j)
        {
            sum->e[k++]=s2->e[j++];
        }
        else
        {
            sum->e[k]=s1->e[i++];
            sum->e[k++].x=s2->e[j++].x;
        }

    }
    }

};



int main()
{
    struct sparse s1,s2,*s3;
    create(&s1);
    create(&s2);
    cout<<"mat 1"<<endl;
    display(s1);
    cout<<"mat 2"<<endl;
    display(s2);
    cout<<"sum mat"<<endl;
    display(*s3);
    return 0;
}

