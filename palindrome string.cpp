#include <iostream>
using namespace std;
int main()
{
    char a[200];
    cin>>a;
    //FIRST METHOD
    //REVERSING
    char b[200];
    int i,j;
    for(j=0;a[j]!='\0';j++)
    {

    }
    int t=j;
    j=j-1;
    for(i=0;j>=0;i++,j--)
    {
         b[i]=a[j];
    }
    b[i]='\0';
    cout<<a<<endl;
    cout<<b<<endl;
    for(i=0;a[i]!='\0';i++)
    {
        if(b[i]!=a[i])
        {
            cout<<"NOT A PALINDROME"<< endl;
            break;
        }
    }
    if(i==t)
    {
        cout<<"palindrome"<<endl;
    }



    return 0;
}
