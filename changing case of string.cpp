#include <iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {str[i]=str[i]+32;}
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
    }
    cout<<str<<endl;
    return 0;
}
