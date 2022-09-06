#include <iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i=0,j,cnt=0;
    while(str[i]!='\0')
    {
        cnt=1;
        if(str[i]!=-1){
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                cnt++;
                str[j]=-1;
            }
        }
        if(cnt>1)
        {
            cout<<str[i]<<" occcurs "<<cnt<<" times."<<endl;
        }}

        i++;
    }


    return 0;
}
