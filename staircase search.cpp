#include <iostream>
using namespace std;

void stairs(int arr[][4],int key,int m,int n)
{
    //BOOL APPROACH
    bool isKeyPresent=false;
    int i=0,j=m-1;
    while(i<n and j>=0)
    {
        if(arr[i][j]<key)
        {
            i++;
        }
        else if(arr[i][j]>key)
        {
            j--;
        }

        if(arr[i][j]==key)
        {
            cout<<"key found";
            isKeyPresent=true;
            break;
        }
    }
    if(isKeyPresent ==false)
    {
        cout<<"NOT FOUND"<<endl;
    }

    /*
    if(i==n || j<0)
    {
        cout<<"not found"<<endl;
    }*/
}


int main()
{
    int arr[4][4]={1,4,8,10,2,5,9,15,6,13,18,20,11,14,21,25};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;}


        int key;
        cin>>key;

        stairs(arr,key,4,4);


    return 0;
}
