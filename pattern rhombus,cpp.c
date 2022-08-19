#include <iostream>
using namespace std;
int main(){
    int n,row,col;
    cin>>n;
    if(n<=-10 or n>=10){return 0;}
    for(row=1;row<=n;row++){
            //for upper
           for(col=1;col<=n-row+1;col++){
            cout<<" ";
           }
    //for spaces
           for(int sp=1;sp<=(2*(row-1))-1;sp++){
            if(row!=1){cout<<"*";}
           }
           //for other side pattern
           if (row==1){
            for( int m=1;m<n;m++){
                cout<<" ";
            }
           }
           if(row>=2){
            for(int j=1;j<=n-row+1;j++){
                cout<<" ";
            }
           }
            cout<<endl;}
    for(row=2;row<=n;row++){
        for(col=1;col<=row;col++){
            cout<<" ";
        }
        //spaces
        for(int dp=1;dp<=(2*(n-row-1))+1;dp++){
            cout<<"*";
        }
        //pattern

        if(row>=2 && row<=n-1){
        for(col=1;col<=row;col++){
            cout<<" ";
        }}
        cout<<endl;
        if(row==n-1){
            for(int l=1;l<n;l++){
                cout<<" ";
            }
        }
    }
    return 0;}

