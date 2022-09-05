#include <iostream>
using namespace std;
int main()
{
    //FIRST METHOD OF REVERSE
    char a[]="python";
    char b[7];
    int i;
    for(i=0;a[i]!='\0';i++)
    {

    }
    i=i-1;
    int j;
    for(j=0;i>=0;i--,j++)
    {
        b[j]=a[i];
    }
    b[j]='\0';
    cout<<"before "<<a<<endl;
    cout<<"after 1 "<<b<<endl;
    //SECOND WAY OF REVERSING
    char t;
    for(j=0;a[j]!='\0';j++){};
    j=j-1;
    for(i=0;i<j;i++,j--)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    cout<<"after 2"<<a<<endl;

    return 0;
}

