#include <iostream>

using namespace std;

int main(){
   /* int A[5];
    A[0]=1;
    A[1]=15;
    A[2]=25;*/

    /*
    int A[7]={2,4,6,8,10};*/

    /*int A[5]={0};

    cout<<sizeof(A)<<endl;
    cout<<A[1]<<endl;
    printf("%d\n",A[2]);

    for(int i=0;i<5 ;i++){
        cout<<A[i]<<endl;;
    }*/

    //FOR EACH LOOP
    int n;
    cin>>n;
    int A[n]={2,4,6,8};
    for(int x:A){
        A[x]++;
    }
    for(int x:A)
        {
            cout<<x<<endl;
        }
    return 0;}
