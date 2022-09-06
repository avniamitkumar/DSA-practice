#include <iostream>
using namespace std;
int main()
{
    string str;
    string str2;
    cin>>str;
    cin>>str2;
    int hash[26]={0};
    int i,j;
    for(i=0;str[i]!='\0';i++)
    {

    }
    for(j=0;str2[j]!='\0';j++)
    {
    }
    if(i==j)
    {
        for(int i=0;str[i]!='\0';i++)
        {
            hash[str[i]-97]+=1;
        }
        for(int j=0;str2[j]!='\0';j++)
        {
            hash[str2[j]-97]-=1;
        }
        for(i=0;i<26;i++)
        {
            if(hash[i]!=0)
            {
                cout<<str<<" and "<<str2<<" are not anagrams"<<endl;
                break;
            }
                }
            if(i==26)
                {
                     cout<<str<< "and "<<str2<<" are anagrams"<<endl;
                }



                }
        else{
                cout<<str<< "and "<<str2<<" are not anagrams"<<endl;
            }
            return 0;

}
