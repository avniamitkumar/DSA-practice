#include <iostream>
using namespace std;
int main()
{

    char a[100];
    char b[100];
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    int i,j;
    for(i=0,j=0;a[i]!='\0' && b[j]!='\0';i++,j++)
    {
        if(a[i]!=b[j])
        {
            break;
        }
    }
    if(a[i]==b[j])
    {
        cout<<"EQUAL"<<endl;
    }
    else if(a[i]>b[j])
    {
        cout<<"B comes first"<<endl;
    }
    else
    {
        cout<<"A comes first"<<endl;
    }

    return 0;
}
