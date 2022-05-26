#include <iostream>
using namespace std;

void fun(int a[]){
    //cout<<sizeof(a)/sizeof(int)<<endl;
    //will give warning
    for(int A:x)
        cout<<A<<endl;
}


int main(){
    int a[]={2,4,6,8,10};
    int n=5;

    for(int x:a)
        cout<<x<<" ";
    fun(a);
    cout<<sizeof(a)/sizeof(int)<<endl;
    return 0;}
