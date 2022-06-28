#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
//CALL BY VALUE
fun(struct rectangle r1)
{
    r1.length++;
    cout<<r1.length<<endl<<r1.breadth<<endl;
}
//CALL BY ADDRESS
fun1(struct rectangle *p)
{
    p->length++;
    cout<<p->length<<endl<<p->breadth<<endl;
}
//PASSING ARRAY BY VALUE IN STRUCT
struct test{
    int a[5];
    int n;
};
void tes(struct test t){
    ++t.a[0];
    ++t.a[1];

    }
;
int main()
{
    struct rectangle r;
    r.length=10;
    r.breadth=20;

    //int arr[5]={2,3,4,5,6};
    int n1=12;
    struct test m={{2,3,4,5,6},n1};
    cout<<"the length of rectangle is"<<r.length<<endl;
    cout<<"the breadth of rectangle is"<<r.breadth<<endl;
    fun(r);
    fun1(&r);
    cout<<"the length of rectangle is"<<r.length<<endl;
    cout<<"the breadth of rectangle is"<<r.breadth<<endl;
    tes(m);
    for(int i=0;i<5;i++)
    {
        cout<<m.a[i]<<endl;
    }


    return 0;
}
