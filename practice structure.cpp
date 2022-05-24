#include <iostream>
using namespace std;
//DEFINING RECTANGLE
struct rectangle
{
    int length;
    int breadth;
    char x;
};

//struct rectangle r1,r2,r3;

int main(){
    //DECLARATION OF A VARIABLE
    struct rectangle r1={10,5};
    //PADDING
    printf("%d",sizeof(r1));
    cout<<endl;
    //ACCESSING ELEMENTS OF A VARIABLE

    //CHANGING LENGTH BREADTH FROM INITIAL VALUES
    r1.length=11;
    r1.breadth=20;


    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;


    return 0;}
