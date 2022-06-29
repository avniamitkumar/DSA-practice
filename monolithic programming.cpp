#include <iostream>
#include <stdio.h>
using namespace std;
//WRITING EVERYTHING INSIDE MAIN FUNCTION
int main()
{
    int len=0,bre=0;
    cout<<"enter length and breadth";
    cin>>len>>bre;
    int a=len*bre;
    int peri=2*(len+bre);

    cout<<"area "<<a<<"  perimeter " <<peri<<endl;

    return 0;
}
