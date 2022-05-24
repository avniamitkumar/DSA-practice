#include <iostream>
using namespace std;
int main(){
    /*int a=10;
    int *p;
    p=&a;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;*/

    //ARRAY POINTER
    int A[5]={2,5,6,8,10};
    int *p;
    p=A;
    //cout<<p<<endl;
    //ACCESING USING POINTER
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    return 0;}
