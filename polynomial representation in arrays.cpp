#include <iostream>
using namespace std;
struct term
{
    int coef;
    int exp;
};

struct poly
{
    int n;
    struct term *t;
};

void create(struct poly *p)
{
    cout<<"ENTER THE NUMBER OF TERMS"<<endl;
    cin>>p->n;
    p->t= new struct term[p->n];
    cout<<"ENTER THE TERMS"<<endl;
    for(int i=0;i<p->n;i++)
    {
        cout<<"term no is "<<i+1<<endl;
        cin>>p->t[i].coef;
        cin>>p->t[i].exp;
    }
}
void display(struct poly p)
{
    for(int i=0;i<p.n;i++)
    {
        cout<<p.t[i].coef<<"x^"<<p.t[i].exp<<" + ";

    }
    cout<<endl;
}
struct poly *add(struct poly *p1,struct poly *p2)
{
    int i,j,k;
    i=j=k=0;
    struct poly *sum;
    sum=new struct poly;
    sum->t=p1->n +p2->n;
    while(i<p1->n && j<p2->n)
    {
        if(p1->t[i].exp>p2->t[j].exp)
        {
            sum->t[k++]=p1->t[i++];
        }
        else if(p1->t[i].exp<p2->t[j].exp)
        {
            sum->t[k++]=p2->t[j++];
        }
        else
        {
            sum->t[k].exp=p1->t[i].exp;
            sum->t[k++].coef=p1->t[i++].coef+p2->t[j++].coef;
                    }
    }
    for(;i<p1->n;i++)
    {sum->t[k++]=p1->t[i];}
    for(;j<p2->n;j++)
        {sum->t[k++]=p2->t[j];}
     sum->n=k;
     return sum;



};
int main()
{
    struct poly p1,p2,*p3;
    create(&p1);
    create(&p2);
    //p3=add(&p1,&p2);
    cout<<endl;
    display(p1);
    cout<<endl;
    display(p2);
    cout<<endl;
    //display(*p3);




    return 0;
}
