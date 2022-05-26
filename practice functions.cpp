#include <iostream>
using namespace std;
//CALL BY VALUE MECHANISM OF PARAMETER PASSING
int add (int a, int b)//ACTUAL PARAMETERS
{
    //FUNCTION DEFINITION
    int c;
    c=a+b;
    return c;
}
int main(){
    int x=10,y=15,z;
    z=add(x,y);//FUNCTION CALL WITH ACTUAL PARAMETERS
    cout<<"SUM IS "<<z<<endl;





    return 0;}
