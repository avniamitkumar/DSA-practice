#include <iostream>
using namespace std;
int main()
{
    char ch='A';
    char *chptr=&ch;
    char c[]="abcd";
    cout<<&ch<<endl;
    cout<<c<<endl;
    cout<<chptr<<endl;
    //PRINTING ADDRESS USING TYECASTING BY THREE METHODS AS FOLLOWS
    cout<<(int*)chptr<<endl;
    cout<<(float*)chptr<<endl;
    cout<<(void*)chptr<<endl;
    cout<<"address of string "<<(int *)c<<endl;
    return 0;
}
