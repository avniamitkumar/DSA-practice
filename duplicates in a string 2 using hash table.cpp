#include <iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int hash[26]={0};
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        hash[str[i]-97]+=1;
    }

    for(int i=0;i<26;i++)
    {
        if(hash[i]>1)
        {
            cout<<(char)(i+97)<<" occurs "<<hash[i]<<" times"<<endl;
        }
    }


    return 0;
}
