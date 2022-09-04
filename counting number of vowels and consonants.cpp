#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str="How are you?";
    //gets(str);
    int ccnt=0;
    int word=0;
    int vcnt=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A' || str[i]=='a')
        {
            vcnt++;
        }
        if(str[i]=='E' || str[i]=='e')
        {
            vcnt++;
        }
        if(str[i]=='I' || str[i]=='i')
        {
            vcnt++;
        }
        if(str[i]=='O' || str[i]=='o')
        {
            vcnt++;
        }
        if(str[i]=='U' || str[i]=='u')
        {
            vcnt++;
        }
        else if((str[i]>=65  && str[i]<=90) || (str[i]>=97  && str[i]<=122))
        {
            ccnt++;
        }
        else if (str[i]==' ')
        {
            word++;
        }

    }

    cout<<"THE NUMBER OF VOWELS IS "<<vcnt<<endl;
    cout<<"THE NUMBER OF CONSONANTS IS "<<ccnt<<endl;
    cout<<"THE NUMBER OF WORDS IS "<<word+1<<endl;
    return 0;
}
