#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main(){
    struct rectangle *p;
    p=(struct rectangle *)malloc(sizeof(struct rectangle));

    p->length=10;
    (*p).breadth=12;

    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    delete p;
    return 0;}
