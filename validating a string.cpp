#include <iostream>
using namespace std;

int valid(char *name)
{
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        if(!(name[i]>=65 && name[i]<=90)|| !(name[i]>=97 && name[i]<=122) || !(name[i]>=0 && name[i]>=9))
        {
            return 1;
        }
    }
    return -1;
}

int main()
{
    char *str="AVNI123";
    int val=valid(str);
    if(val==-1)
    {
        cout<<"valid"<<endl;
    }
    else{
        cout<<"invalid"<<endl;
    }



    return 0;
}

